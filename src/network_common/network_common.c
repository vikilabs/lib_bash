/**
 *
 * @FILE        	: NETWORK_COMMON.H
 * @DESCRIPTION 	: LIB TO DO BASIC BASH NETWORK OPERATION
 *
 * @AUTHOR      	: VIKI ( VIGNESH NATARAJAN )
 * @CONTACT         : VIKILABS.ORG
 *
 */

/*
    Copyright (c) 2016 Viki( Vignesh Natarajan )
    
    Contact @ vikilabs.org

    Permission is hereby granted, free of charge, to any person obtaining
    a copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the Software
    is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
    OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.
    IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
    CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
    TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
    OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/



#include <stdio.h>
#include "network_common.h"
#include "../bash_common/bash_common.h"

#define NETWORK_DEBUG 1

int ping(char *ip)
{
    char cmd[128];
    if(!ip) return 0;

    snprintf(cmd, 128, "ping -c 1 %s", ip);

    if(exec_command(cmd) == 0){
        if(NETWORK_DEBUG) printf("[ ping %s ] success \n", ip);
        return 1;
    }else{
        if(NETWORK_DEBUG) printf("[ ping %s ] failure \n", ip);
        return 0;
    }

}

#if 0
int main(){
    ping("8.8.8.8");
    ping("dl.vikilabs.org");
    ping("dllll.vikilabs.org");
}
#endif