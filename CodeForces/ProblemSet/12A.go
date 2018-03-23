package main

import (
    "fmt"
)

func main() {
    var G [3]string
    for i:=0; i<3; i++ {
        fmt.Scanln(&G[i])
    }
    if symmetric(G) {
        fmt.Println("YES")
    }else {
        fmt.Println("NO")
    }
}

func symmetric(G [3]string) bool {
    for i:=0; i<2; i++ {
        for j:=0; j<3; j++ {
            if G[i][j] != G[2-i][2-j] {
                return false
            }
        }
    }
    return true
}
