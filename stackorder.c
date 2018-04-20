#include <stddef.h>
#include "seqstack.h"

//返回1 表示能够变换成功
//返回0 表示不能变换成功
int StackOrder(char input[],size_t input_size,char output[],size_t output_size){
    SeqStack stack;
    SeqStackInit(&stack);
    //1.循环的把input的元素入栈
    size_t i=0;
    size_t output_index=0;
    for(;i<input_size;i++){
        SeqStackPush(&stack,input[i]);
        char top;
        int ret=SeqStackTop(&stack,&top);
        if(ret==0){
            //栈已空，准备进行最终审判
            break;
        }
        //2.取栈顶元素，和output_index 指向的元素比较
        while(1){
            if(top!=output[output_index])
            {
                break;
            }
            ++output_index;
            SeqStackPop(&stack);
        }
    }
}
