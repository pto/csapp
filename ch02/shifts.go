package main

import "fmt"

func main() {
	var i int32 = 0x1234ABCD
	fmt.Printf("%#x\n", i<<4)
	fmt.Printf("%#x\n", i<<36)
}
