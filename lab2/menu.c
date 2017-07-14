/*
*    Created by XIONG Kyren 2017/04/29
*    
*    Language: C
*    Description: Imitating the cmd line program. Simplest version.
*
*/
#include <stdio.h>
#include <stdlib.h>

void handleHelp();
void handleWrong();
void handleCd();
void handleRm();
void handleCp();
void handlePwd();
void handleTouch();
void handleMkdir();

int main()
{
    char cmd[128];
    while(1)
    {
        scanf("%s", cmd);
	if(strcmp(cmd, "help") == 0)
	{
	    handleHelp();
	}
	else if(strcmp(cmd, "quit") == 0)
	{
	    exit(0);
	}
	else if(strcmp(cmd, "cd") == 0)
	{
	    handleCd();
	}
	else if(strcmp(cmd, "rm") == 0)
	{
	    handleRm();
	}
	else if(strcmp(cmd, "cp") == 0)
	{
	    handleCp();
	}
	else if(strcmp(cmd, "mkdir") == 0)
	{
	    handleMkdir();
	}
	else if(strcmp(cmd, "touch") == 0)
	{
	    handleTouch();
	}
	else if(strcmp(cmd, "pwd") == 0)
	{
	    handlePwd();
	}
	else
	{
	    handleWrong();
	}
    }

}

void handleHelp()
{
    printf("All cmd:\ncd cp pwd touch\nmkdir help quit rm\n");
}

void handleWrong()
{
    printf("No cmd found, please check!\n");
}

void handleCd()
{
    printf("cd cmd will be finished soon\n");
}

void handleRm()
{
    printf("Rm cmd will be finished soon\n");
}

void handleCp()
{
    printf("cp cmd will be finished soon\n");
}

void handleMkdir()
{
    printf("mkdir cmd will be finished soon\n");
}
void handleTouch()
{
    printf("touch cmd will be finished soon\n");
}
void handlePwd()
{
    printf("pwd cmd will be finished soon\n");
}
