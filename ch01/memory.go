package main

import "fmt"

var a int = 42

func main() {
	var i int = 123
	fmt.Printf("address of a is %p, address of i is %p\n", &a, &i)
}
