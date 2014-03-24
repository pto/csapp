package main

import (
	"fmt"
	"strconv"
)

func main() {
	fmt.Printf("A. expecting 1110011010011111111000: %b\n", 0x39A7F8)
	i, _ := strconv.ParseInt("1100100101111011", 2, 64)
	fmt.Printf("B. expecting c97b: %x\n", i)
	fmt.Printf("C. expecting 11010101111001001100: %b\n", 0xD5E4C)
	i, _ = strconv.ParseInt("1001101110011110110101", 2, 64)
	fmt.Printf("D. expecting 26e7b5: %x\n", i)
}
