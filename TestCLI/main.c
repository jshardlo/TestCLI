//
//  main.c
//  TestCLI
//
//  Created by John Shardlow on 12/02/2019.
//  Copyright © 2019 John Shardlow. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    printf("Number of args: %d\n", argc);
    int c;
    
    for (c=0; c<argc; c++) {
        printf("%s\n", argv[c]);
    }
    // printf("Hello World!\n");
    return 0;
}
