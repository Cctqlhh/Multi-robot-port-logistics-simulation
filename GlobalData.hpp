#pragma once
#include <bits/stdc++.h>
#include "Robot.hpp"
#include "Berth.hpp"
#include "Boat.hpp"
using namespace std;

const int n = 200;
const int robot_num = 10;
const int berth_num = 10;
const int N = 210;

Robot robot[robot_num + 10];
Berth berth[berth_num + 10];
Boat boat[10];

int money, boat_capacity, id;
char ch[N][N];
int gds[N][N];


void Init()
{
    for(int i = 1; i <= n; i ++) // ��ͼ 200*200
        scanf("%s", ch[i] + 1);
    for(int i = 0; i < berth_num; i ++) // ��λ 10
    {
        int id;
        scanf("%d", &id); // ��λ��� 0-9
        scanf("%d%d%d%d", &berth[id].x, &berth[id].y, &berth[id].transport_time, &berth[id].loading_speed); // ��λ���Ͻ�����4*4 ����ʱ��֡�� װ���ٶ�ÿ֡װ����
    }
    scanf("%d", &boat_capacity); // �����������װ����Ʒ��
    char okk[100];
    scanf("%s", okk); // ��ȡOK
    printf("OK\n"); // �ظ�ok
    fflush(stdout);
}

int Input()
{
    scanf("%d%d", &id, &money); // ֡��� Ǯ
    int num;
    scanf("%d", &num); // ������������0-10
    for(int i = 1; i <= num; i ++) // ����������Ϣ
    {
        int x, y, val;
        scanf("%d%d%d", &x, &y, &val); // λ�� ���<=1000
    }
    for(int i = 0; i < robot_num; i ++) // ��������Ϣ
    {
        // int sts;
        scanf("%d%d%d%d", &robot[i].goods, &robot[i].x, &robot[i].y, &robot[i].status); // �Ƿ�Я����Ʒ01 ���� ״̬0�ָ�1����
    }
    for(int i = 0; i < 5; i ++) // 5���� i��Ӧ��id0-4
        scanf("%d%d\n", &boat[i].status, &boat[i].pos); // ״̬0�ƶ�(����)1����װ��/�������  Ŀ�겴λ����������-1��
    char okk[100];
    scanf("%s", okk); //����OK
    return id;
}




