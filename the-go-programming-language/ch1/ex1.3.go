package main

import (
	"math/rand"
	"strconv"
	"strings"
	"testing"
)

func simpleJoin(data []string) string {
	var s, sep string
	for _, s := range data {
		s += sep + s
		sep = " "
	}

	return s
}

func builtinJoin(data []string) string {
	return strings.Join(data, " ")
}

func createDummyData(size int) []string {

	data := make([]string, size, size)
	for i := 0; i < size; i++ {
		data[i] = strconv.Itoa(rand.Intn(size))
	}

	return data
}

const size = 100000000
var dummyData = createDummyData(size)

func BenchmarkSimpleJoin(b *testing.B) {
	simpleJoin(dummyData) // 4.753371026s
}

func BenchmarkBuiltinJoin(b *testing.B) {
	builtinJoin(dummyData) // 1.182192818s
}

