package main

import (
	"bufio"
	"bytes"
	"fmt"
)

type WordCounter int

func (w *WordCounter) Write(p []byte) (n int, err error) {
	scanner := bufio.NewScanner(bytes.NewReader(p))
	scanner.Split(bufio.ScanWords)
	words := 0
	for scanner.Scan() {
		*w += WordCounter(1)
		words += 1
	}

	return words, nil
}

func main()  {
	var w WordCounter
	testString := "Hej med dig"

	_, err := fmt.Fprint(&w, testString)
	if err != nil {
		panic(err)
	}

	fmt.Printf("words written: %d", w)
}

