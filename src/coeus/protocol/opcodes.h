// Generate by the sword of core(核心之刃). DO NOT EDIT!
// Source : opcodes.h
// Comment : 在此处输入一些备注信息...

#ifndef __OPCODES_H__
#define __OPCODES_H__

#include <venus_net/network_common.h>

namespace Opcodes
{
    //用户系统(4 message)
    const static uint32 CSLoginReq    = 10001;   //登录请求
    const static uint32 SCLoginRsp    = 10002;   //登录返回
    const static uint32 CSRegisterReq = 10003;   //用户注册请求
    const static uint32 SCRegisterRsp = 10004;   //用户注册返回
    //角色创建(4 message)
    const static uint32 CSCreateCharacter    = 11003;   //发送创建角色的请求
    const static uint32 SCCreateCharacter    = 11004;   //创建角色返回
    const static uint32 CSCheckNicknameExist = 11005;   //请求检查昵称是否存在
    const static uint32 SCCheckNicknameExist = 11006;   //返回昵称检查结果
    //通信系统(2 message)
    const static uint32 SCErrorNotify   = 500;   //错误通知
    const static uint32 SCErrorExNotify = 501;   //扩展的错误通知
    //角色属性(2 message)
    const static uint32 CSCharacterInitialDataReq = 15000;   //请求玩家初始数据
    const static uint32 SCCharacterInitialDataRsp = 15001;   //玩家属性返回
    //在线聊天(5 message)
    const static uint32 CSSendPublicChatMessageReq        = 20000;   //发送公共聊天
    const static uint32 CSSendPrivateChatMessageByIdReq   = 20001;   //发送私聊消息（通过GUID）
    const static uint32 CSSendPrivateChatMessageByNameReq = 20002;   //发送私聊消息（通过昵称）
    const static uint32 SCPublicChatMessageNotification   = 20003;   //公共聊天消息通知
    const static uint32 SCPrivateChatMessageNotification  = 20004;   //私聊消息通知
    //任务系统(2 message)
    const static uint32 CSMissionListReq = 22000;   //请求任务列表
    const static uint32 SCMissionListRsp = 22001;   //任务列表返回
}

#endif