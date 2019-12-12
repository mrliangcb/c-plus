#pragma once
#ifndef HEADER_H //如何防止头文件重复:如果已经被定义过了，则HEADER_H返回FALSE,  True表示还没被定义过，能够自定义
#define HEADER_H

unsigned long returnFactorial(unsigned short num);//声明一个函数，在that.cpp里面定义的
static const unsigned short headerNum = 5;


#endif