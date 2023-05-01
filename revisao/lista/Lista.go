package main
import "fmt"
import "container/list"

func main(){
	nomes := list.New()
	nomes.PushBack("Josimar")
	nomes.PushBack("Angélica")
	for e := nomes.Front(); e != nil; e = e.Next() {
        fmt.Println(e.Value)
    }
}