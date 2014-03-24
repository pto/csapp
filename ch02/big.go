package main

import (
	"fmt"
	"runtime"
	"unsafe"
)

func main() {
	fmt.Printf("Go version is %v\n\n", runtime.Version())

	fmt.Printf("unsafe.Sizeof(int32(0)) is %v\n", unsafe.Sizeof(int32(0)))
	var i int32 = 200
	fmt.Printf("%d\n\n", int32(i*300*400*500))

	fmt.Printf("unsafe.Sizeof(int64(0)) is %v\n", unsafe.Sizeof(int64(0)))
	fmt.Printf("%d\n\n", int64(200)*300*400*500)

	fmt.Printf("unsafe.Sizeof(float64(0)) is %v\n", unsafe.Sizeof(float64(0)))
	var x float64 = 3.14
	fmt.Printf("%g %g\n", (x+1e20)-1e20, x+(1e20-1e20))
}
