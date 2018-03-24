package main

import (
    "fmt"
    "sort"
    "strconv"
)

func main() {
    var a string
    var b string
    var c int
    fmt.Scanln(&a)
    fmt.Scanln(&b)
    ai, _ := strconv.Atoi(a)

    digit := make([]int, 0, 10)
    for tmp:=ai; tmp>0; {
        digit = append(digit, tmp%10)
        tmp /= 10
    }
    sort.Ints(digit)

    zeros := 0
    c = 0
    for _, x := range digit {
        if x == 0 {
            zeros++
        }else {
            if zeros > 0 {
                c = x
                for zeros > 0 {
                    c *= 10
                    zeros--
                }
            }else {
                c *= 10
                c += x
            }
        }
    }

    ca := strconv.Itoa(c);
    if b == ca {
        fmt.Println("OK")
    }else {
        fmt.Println("WRONG_ANSWER")
    }
}
