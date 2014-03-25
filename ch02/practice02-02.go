package main

import (
	"fmt"
	"math"
)

func check(power int) {
	f := "Check: %3d %10[2]d %#10[2]x\n"
	fmt.Printf(f, power, int64(math.Pow(2, float64(power))))
}

func main() {
	f := "       %3d %10d %#10x\n"
	fmt.Printf(f, 9, 512, 0x200)
	check(9)
	fmt.Printf(f, 19, 524288, 0x80000)
	check(19)
	fmt.Printf(f, 14, 16384, 0x4000)
	check(14)
	fmt.Printf(f, 16, 65536, 0x10000)
	check(16)
	fmt.Printf(f, 17, 131072, 0x20000)
	check(17)
	fmt.Printf(f, 5, 32, 0x20)
	check(5)
	fmt.Printf(f, 7, 128, 0x80)
	check(7)
}
