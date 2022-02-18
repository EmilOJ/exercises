package main

import (
	"fmt"
	"io"
)
type ByteCountWriter struct {
	ByteCount int64
	Writer io.Writer
}

func (b *ByteCountWriter) Write(p []byte) (n int, err error) {
	b.ByteCount += int64(len(p))

	return b.Writer.Write(p)
}

func CountingWriter(w io.Writer) (io.Writer, *int64){
	bcw := ByteCountWriter{
		ByteCount: 0,
		Writer:    w,
	}
	return &bcw, &bcw.ByteCount
}

func main()  {
	w := io.Discard
	cw, b := CountingWriter(w)

	// First test write
	testString := "Hej med dig"
	numBytes := len([]byte(testString))
	_, err := fmt.Fprint(cw, testString)
	fmt.Printf("writing %d bytes....\n", numBytes)
	if err != nil {
		panic(err)
	}
	fmt.Printf("counter: %d\n", *b)

	// Second test write
	testString = "okaay123"
	numBytes = len([]byte(testString))
	_, err = fmt.Fprint(cw, testString)
	fmt.Printf("writing %d bytes....\n", numBytes)
	if err != nil {
		panic(err)
	}
	fmt.Printf("counter: %d\n", *b)
}

