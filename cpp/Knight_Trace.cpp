/////////////////////////////////////////////////////////////////////////////////
// author		:	KNIGHT
// Description	:	调试模块
//
// Time			:	2008/12/10
//					最后更新于 09 - 03 - 26
// Email		:	KnightLiao@gmail.com	liaoqiqi@cad.zju.edu.cn
// Blog			:	http://knightliao.blogspot.com
//////////////////////////////////////////////////////////////////////////////////



#include "../headers/Knight_Trace.h"


/*

用户可以自己定义自己的调试变量,也可以引用系统为你自带的以下调试变量

引用系统自带的调试变量的方式如下 :
			   Trace::t_stream << 
			   Trace::t_stream << "debug in system trace mode " << std::endl;

自己定义调试变量的方式如下:
  定义全局变量 Trace myTrace(true,"debug.txt");
			   myTrace << " debug in my trace mode " << std::endl;

*/

Trace Trace::t_stream(true,"..\\Tracedata\\Debug_stream.txt");	// 数据流变量
		// 1. 打印 变量 调试
		
Trace Trace::t_log(true,"..\\Tracedata\\Knight_log.txt");		// 系统日志文件
		// 1. 程序流程 
		// 2. 程序出错
		// 3. 程序入口 出口

Trace Trace::t_tmp(true,"..\\Tracedata\\tmp.txt");	// 用于任意用途的函数




/*


Note : 生成的调试文件的位置
	比如
		FaceEngine项目调用了KnightTrace类
		而test项目又调用了FaceEngline
		那么，生成的  Debug_stream  Knight_log 都是在test项目文件夹下的，
		如果 Test项目文件下没有Tracedata文件夹，那么 日志文件的生成就会失败。

		而且，如果有编辑过KnightTrace项目文件，则该类要重新编译链接一次

		还有，变量的on_stream要记得开启，才会写入文件

*/

/*
//-----全局测试变量-----------
Trace t(false,"TraceData\\KnightLog.txt");			// 程序流程变量
Trace t_stream(true,"TraceData\\debug_stream.txt");	// 程序中数据打印变量
Trace t_scanLine(true,"TraceData\\debug_scanLine.txt");	// 扫描线算法中 流程及变量 的打印变量
*/