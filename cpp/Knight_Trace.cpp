/////////////////////////////////////////////////////////////////////////////////
// author		:	KNIGHT
// Description	:	����ģ��
//
// Time			:	2008/12/10
//					�������� 09 - 03 - 26
// Email		:	KnightLiao@gmail.com	liaoqiqi@cad.zju.edu.cn
// Blog			:	http://knightliao.blogspot.com
//////////////////////////////////////////////////////////////////////////////////



#include "../headers/Knight_Trace.h"


/*

�û������Լ������Լ��ĵ��Ա���,Ҳ��������ϵͳΪ���Դ������µ��Ա���

����ϵͳ�Դ��ĵ��Ա����ķ�ʽ���� :
			   Trace::t_stream << 
			   Trace::t_stream << "debug in system trace mode " << std::endl;

�Լ�������Ա����ķ�ʽ����:
  ����ȫ�ֱ��� Trace myTrace(true,"debug.txt");
			   myTrace << " debug in my trace mode " << std::endl;

*/

Trace Trace::t_stream(true,"..\\Tracedata\\Debug_stream.txt");	// ����������
		// 1. ��ӡ ���� ����
		
Trace Trace::t_log(true,"..\\Tracedata\\Knight_log.txt");		// ϵͳ��־�ļ�
		// 1. �������� 
		// 2. �������
		// 3. ������� ����

Trace Trace::t_tmp(true,"..\\Tracedata\\tmp.txt");	// ����������;�ĺ���




/*


Note : ���ɵĵ����ļ���λ��
	����
		FaceEngine��Ŀ������KnightTrace��
		��test��Ŀ�ֵ�����FaceEngline
		��ô�����ɵ�  Debug_stream  Knight_log ������test��Ŀ�ļ����µģ�
		��� Test��Ŀ�ļ���û��Tracedata�ļ��У���ô ��־�ļ������ɾͻ�ʧ�ܡ�

		���ң�����б༭��KnightTrace��Ŀ�ļ��������Ҫ���±�������һ��

		���У�������on_streamҪ�ǵÿ������Ż�д���ļ�

*/

/*
//-----ȫ�ֲ��Ա���-----------
Trace t(false,"TraceData\\KnightLog.txt");			// �������̱���
Trace t_stream(true,"TraceData\\debug_stream.txt");	// ���������ݴ�ӡ����
Trace t_scanLine(true,"TraceData\\debug_scanLine.txt");	// ɨ�����㷨�� ���̼����� �Ĵ�ӡ����
*/