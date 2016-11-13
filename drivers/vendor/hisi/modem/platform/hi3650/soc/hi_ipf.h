/*
 * Copyright (C) Huawei Technologies Co., Ltd. 2012-2015. All rights reserved.
 * foss@huawei.com
 *
 * If distributed as part of the Linux kernel, the following license terms
 * apply:
 *
 * * This program is free software; you can redistribute it and/or modify
 * * it under the terms of the GNU General Public License version 2 and 
 * * only version 2 as published by the Free Software Foundation.
 * *
 * * This program is distributed in the hope that it will be useful,
 * * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * * GNU General Public License for more details.
 * *
 * * You should have received a copy of the GNU General Public License
 * * along with this program; if not, write to the Free Software
 * * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA
 *
 * Otherwise, the following license terms apply:
 *
 * * Redistribution and use in source and binary forms, with or without
 * * modification, are permitted provided that the following conditions
 * * are met:
 * * 1) Redistributions of source code must retain the above copyright
 * *    notice, this list of conditions and the following disclaimer.
 * * 2) Redistributions in binary form must reproduce the above copyright
 * *    notice, this list of conditions and the following disclaimer in the
 * *    documentation and/or other materials provided with the distribution.
 * * 3) Neither the name of Huawei nor the names of its contributors may 
 * *    be used to endorse or promote products derived from this software 
 * *    without specific prior written permission.
 * 
 * * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef __HI_IPF_H__
#define __HI_IPF_H__

/*
 * Project: hi
 * Module : IPF
 */

#ifndef HI_SET_GET
#define HI_SET_GET(a0,a1,a2,a3,a4)
#endif

/********************************************************************************/
/*    IPF 寄存器偏移定义（项目名_模块名_寄存器名_OFFSET)        */
/********************************************************************************/
#define    HI_IPF_SRST_OFFSET                                (0x0) /* IPF复位控制寄存器 */
#define    HI_IPF_SRST_STATE_OFFSET                          (0x4) /* IPF复位状态寄存器 */
#define    HI_IPF_CH_EN_OFFSET                               (0x8) /* IPF 通道使能配置寄存器 */
#define    HI_IPF_EN_STATE_OFFSET                            (0xC) /* IPF 通道使能状态寄存器 */
#define    HI_IPF_GATE_OFFSET                                (0x10) /* IPF时钟门控配置寄存器 */
#define    HI_IPF_CTRL_OFFSET                                (0x14) /* IPF全局控制配置寄存器 */
#define    HI_IPF_DMA_CTRL0_OFFSET                           (0x18) /* IPF DMA控制寄存器0 */
#define    HI_IPF_DMA_CTRL1_OFFSET                           (0x1C) /* IPF DMA控制寄存器1 */
#define    HI_IPF_VERSION_OFFSET		             		 (0x20) /* IPF 版本寄存器  */
#define    HI_IPF_INT0_OFFSET                                (0x30) /* 中断上报寄存器0 */
#define    HI_IPF_INT1_OFFSET                                (0x34) /* 中断上报寄存器1 */
#define    HI_IPF_INT_MASK0_OFFSET                           (0x38) /* 中断屏蔽寄存器0 */
#define    HI_IPF_INT_MASK1_OFFSET                           (0x3C) /* 中断屏蔽寄存器1 */
#define    HI_IPF_INT_STATE_OFFSET                           (0x40) /* 中断状态寄存器 */
#define    HI_IPF_TIME_OUT_OFFSET                            (0x44) /* 超时配置寄存器 */
#define    HI_IPF_PKT_LEN_OFFSET                             (0x48) /* 包长配置寄存器 */
#define    HI_IPF_FILTER_ZERO_INDEX_OFFSET                   (0x70) /* IPF过滤器起始索引配置寄存器 */
#define    HI_IPF_EF_BADDR_OFFSET                            (0x74) /* 扩展过滤器基地址配置寄存器 */
#define    HI_BFLT_INDEX_OFFSET                              (0x78) /* 基本过滤表配置索引 */
#define    HI_FLT_CHAIN_LOOP_OFFSET                          (0x7C) /* 过滤器链表环告警 */
#define    HI_FLT_LOCAL_ADDR0_OFFSET                         (0x90) /* 过滤器local address配置寄存器 */
#define    HI_FLT_LOCAL_ADDR1_OFFSET                         (0x94) /* 过滤器local address配置寄存器 */
#define    HI_FLT_LOCAL_ADDR2_OFFSET                         (0x98) /* 过滤器local address配置寄存器 */
#define    HI_FLT_LOCAL_ADDR3_OFFSET                         (0x9C) /* 过滤器local address配置寄存器 */
#define    HI_FLT_REMOTE_ADDR0_OFFSET                        (0xA0) /* 过滤器remote address配置寄存器 */
#define    HI_FLT_REMOTE_ADDR1_OFFSET                        (0xA4) /* 过滤器remote address配置寄存器 */
#define    HI_FLT_REMOTE_ADDR2_OFFSET                        (0xA8) /* 过滤器remote address配置寄存器 */
#define    HI_FLT_REMOTE_ADDR3_OFFSET                        (0xAC) /* 过滤器remote address配置寄存器 */
#define    HI_FLT_REMOTE_ADDR0_MASK_OFFSET                   (0xB0) /* 过滤器remote address配置寄存器 */
#define    HI_FLT_REMOTE_ADDR1_MASK_OFFSET                   (0xB4) /* 过滤器remote address配置寄存器 */
#define    HI_FLT_REMOTE_ADDR2_MASK_OFFSET                   (0xB8) /* 过滤器remote address配置寄存器 */
#define    HI_FLT_REMOTE_ADDR3_MASK_OFFSET                   (0xBC) /* 过滤器remote address配置寄存器 */
#define    HI_FLT_LOCAL_PORT_OFFSET                          (0xC0) /* 过滤表LOCAL PORT门限配置寄存器 */
#define    HI_FLT_REMOTE_PORT_OFFSET                         (0xC4) /* 过滤表REMOTE PORT门限配置寄存器 */
#define    HI_FLT_TRAFFIC_CLASS_OFFSET                       (0xC8) /* 过滤表业务等级域配置寄存器 */
#define    HI_FLT_LADD_MASK_OFFSET                           (0xCC) /* 过滤器local address mask域配置寄存器 */
#define    HI_FLT_NEXT_HEADER_OFFSET                         (0xD0) /* 过滤器协议类型域配置寄存器 */
#define    HI_FLT_FLOW_LABEL_OFFSET                          (0xD4) /* 过滤器流标签域配置寄存器 */
#define    HI_FLT_ICMP_OFFSET                                (0xD8) /* 过滤器ICMP配置寄存器 */
#define    HI_FLT_CHAIN_OFFSET                               (0xDC) /* 过滤器链表域配置寄存器 */
#define    HI_FLT_SPI_OFFSET                                 (0xE0) /* 过滤器SPI配置寄存器 */
#define    HI_FLT_RULE_CTRL_OFFSET                           (0xE4) /* 过滤器规则控制配置寄存器 */
#define    HI_IPF_CH0_CTRL_OFFSET                            (0x100) /* 上行通道控制寄存器 */
#define    HI_IPF_CH0_STATE_OFFSET                           (0x104) /* 上行通道状态寄存器 */
#define    HI_IPF_CH0_BDQ_BADDR_OFFSET                       (0x108) /* 上行通道BDQ起始地址 */
#define    HI_IPF_CH0_BDQ_SIZE_OFFSET                        (0x10C) /* 上行通道BDQ深度 */
#define    HI_IPF_CH0_BDQ_WPTR_OFFSET                        (0x110) /* 上行通道BDQ写指针 */
#define    HI_IPF_CH0_BDQ_RPTR_OFFSET                        (0x114) /* 上行通道BDQ读指针 */
#define    HI_IPF_CH0_BDQ_WADDR_OFFSET                       (0x118) /* 上行通道BDQ写地址 */
#define    HI_IPF_CH0_BDQ_RADDR_OFFSET                       (0x11C) /* 上行通道BDQ读地址 */
#define    HI_IPF_CH0_RDQ_BADDR_OFFSET                       (0x120) /* 上行通道RDQ起始地址 */
#define    HI_IPF_CH0_RDQ_SIZE_OFFSET                        (0x124) /* 上行通道RDQ深度 */
#define    HI_IPF_CH0_RDQ_WPTR_OFFSET                        (0x128) /* 上行通道RDQ写指针 */
#define    HI_IPF_CH0_RDQ_RPTR_OFFSET                        (0x12C) /* 上行通道RDQ读指针 */
#define    HI_IPF_CH0_RDQ_WADDR_OFFSET                       (0x130) /* 上行通道RDQ写地址 */
#define    HI_IPF_CH0_RDQ_RADDR_OFFSET                       (0x134) /* 上行通道RDQ读地址 */
#define    HI_IPF_CH0_DQ_DEPTH_OFFSET                        (0x138) /* 上行通道队列深度指示寄存器 */
#define    HI_IPF_CH1_CTRL_OFFSET                            (0x150) /* 下行通道控制寄存器 */
#define    HI_IPF_CH1_STATE_OFFSET                           (0x154) /* 下行通道状态寄存器 */
#define    HI_IPF_CH1_BDQ_BADDR_OFFSET                       (0x158) /* 下行通道BDQ起始地址 */
#define    HI_IPF_CH1_BDQ_SIZE_OFFSET                        (0x15C) /* 下行通道BDQ深度 */
#define    HI_IPF_CH1_BDQ_WPTR_OFFSET                        (0x160) /* 下行通道BDQ写指针 */
#define    HI_IPF_CH1_BDQ_RPTR_OFFSET                        (0x164) /* 下行通道BDQ读指针 */
#define    HI_IPF_CH1_BDQ_WADDR_OFFSET                       (0x168) /* 下行通道BDQ写地址 */
#define    HI_IPF_CH1_BDQ_RADDR_OFFSET                       (0x16C) /* 下行通道BDQ读地址 */
#define    HI_IPF_CH1_RDQ_BADDR_OFFSET                       (0x170) /* 下行通道RDQ起始地址 */
#define    HI_IPF_CH1_RDQ_SIZE_OFFSET                        (0x174) /* 下行通道RDQ深度 */
#define    HI_IPF_CH1_RDQ_WPTR_OFFSET                        (0x178) /* 下行通道RDQ写指针 */
#define    HI_IPF_CH1_RDQ_RPTR_OFFSET                        (0x17C) /* 下行通道RDQ读指针 */
#define    HI_IPF_CH1_RDQ_WADDR_OFFSET                       (0x180) /* 下行通道RDQ写地址 */
#define    HI_IPF_CH1_RDQ_RADDR_OFFSET                       (0x184) /* 下行通道RDQ读地址 */
#define    HI_IPF_CH1_DQ_DEPTH_OFFSET                        (0x188) /* 下行通道队列深度指示寄存器 */
#define    HI_IPF_CH0_ADQ_CTRL_OFFSET                        (0x204) /* 上行通道ADQ控制寄存器 */
#define    HI_IPF_CH0_ADQ0_BASE_OFFSET                       (0x210) /* 上行通道ADQ0基址寄存器 */
#define    HI_IPF_CH0_ADQ0_STAT_OFFSET                       (0x214) /* 上行通道ADQ0状态寄存器 */
#define    HI_IPF_CH0_ADQ0_WPTR_OFFSET                       (0x218) /* 上行通道ADQ0写指针寄存器 */
#define    HI_IPF_CH0_ADQ0_RPTR_OFFSET                       (0x21C) /* 上行通道ADQ0读指针寄存器 */
#define    HI_IPF_CH0_ADQ1_BASE_OFFSET                       (0x220) /* 上行通道ADQ1基址寄存器 */
#define    HI_IPF_CH0_ADQ1_STAT_OFFSET                       (0x224) /* 上行通道ADQ1状态寄存器 */
#define    HI_IPF_CH0_ADQ1_WPTR_OFFSET                       (0x228) /* 上行通道ADQ1写指针寄存器 */
#define    HI_IPF_CH0_ADQ1_RPTR_OFFSET                       (0x22C) /* 上行通道ADQ1读指针寄存器 */
#define    HI_IPF_CH1_ADQ_CTRL_OFFSET                        (0x284) /* 下行通道ADQ控制寄存器 */
#define    HI_IPF_CH1_ADQ0_BASE_OFFSET                       (0x290) /* 下行通道ADQ0基址寄存器 */
#define    HI_IPF_CH1_ADQ0_STAT_OFFSET                       (0x294) /* 下行通道ADQ0状态寄存器 */
#define    HI_IPF_CH1_ADQ0_WPTR_OFFSET                       (0x298) /* 下行通道ADQ0写指针寄存器 */
#define    HI_IPF_CH1_ADQ0_RPTR_OFFSET                       (0x29C) /* 下行通道ADQ0读指针寄存器 */
#define    HI_IPF_CH1_ADQ1_BASE_OFFSET                       (0x2A0) /* 下行通道ADQ1基址寄存器 */
#define    HI_IPF_CH1_ADQ1_STAT_OFFSET                       (0x2A4) /* 下行通道ADQ1状态寄存器 */
#define    HI_IPF_CH1_ADQ1_WPTR_OFFSET                       (0x2A8) /* 下行通道ADQ1写指针寄存器 */
#define    HI_IPF_CH1_ADQ1_RPTR_OFFSET                       (0x2AC) /* 下行通道ADQ1读指针寄存器 */
#define    HI_IPF_CH0_WDATA_FAMA_ATTR_OFFSET				 (0x2B0) /* 上行通道写数据FAMA属性寄存器*/
#define    HI_IPF_CH0_RDATA_FAMA_ATTR_OFFSET				 (0x2B4) /* 上行通道读数据FAMA属性寄存器*/
#define    HI_IPF_CH0_RD_FAMA_ATTR_OFFSET				 	 (0x2B8) /* 上行通道RD描述符FAMA属性寄存器*/
#define    HI_IPF_CH0_BD_FAMA_ATTR_OFFSET				 	 (0x2BC) /* 上行通道BD描述符FAMA属性寄存器*/
#define    HI_IPF_CH0_AD_FAMA_ATTR_OFFSET				 	 (0x2C0) /* 上行通道AD描述符FAMA属性寄存器*/
#define    HI_IPF_CH0_CD_FAMA_ATTR_OFFSET				 	 (0x2C4) /* 上行通道CD描述符FAMA属性寄存器*/
#define    HI_IPF_CH1_WDATA_FAMA_ATTR_OFFSET				 (0x2C8) /* 下行通道写数据FAMA属性寄存器*/
#define    HI_IPF_CH1_RDATA_FAMA_ATTR_OFFSET				 (0x2CC) /* 下行通道读数据FAMA属性寄存器*/
#define    HI_IPF_CH1_RD_FAMA_ATTR_OFFSET				 	 (0x2D0) /* 下行通道RD描述符FAMA属性寄存器*/
#define    HI_IPF_CH1_BD_FAMA_ATTR_OFFSET				 	 (0x2D4) /* 下行通道BD描述符FAMA属性寄存器*/
#define    HI_IPF_CH1_AD_FAMA_ATTR_OFFSET				 	 (0x2D8) /* 下行通道AD描述符FAMA属性寄存器*/
#define    HI_IPF_CH1_CD_FAMA_ATTR_OFFSET				 	 (0x2DC) /* 下行通道CD描述符FAMA属性寄存器*/
#define    HI_IPF_EF_FAMA_ATTR_OFFSET				 	 	 (0x2E0) /* 外部过滤器FAMA属性寄存器*/
#define    HI_IPF_CH1_DIRECT_RDATA_FAMA_ATTR_OFFSET			 (0x2E4) /* 下行直通通道读数据FAMA属性寄存器*/
#define    HI_IPF_MST_REGION0_START_OFFSET                   (0x300) /* MST端口受限的起始地址寄存器0 (属性为安全) */
#define    HI_IPF_MST_REGION0_END_OFFSET                   	 (0x304) /* MST端口受限的结束地址寄存器0 (属性为安全) */
#define    HI_IPF_MST_REGION1_START_OFFSET                   (0x308) /* MST端口受限的起始地址寄存器1 (属性为安全) */
#define    HI_IPF_MST_REGION1_END_OFFSET                   	 (0x30c) /* MST端口受限的结束地址寄存器1 (属性为安全) */
#define    HI_IPF_MST_REGION2_START_OFFSET                   (0x310) /* MST端口受限的起始地址寄存器2 (属性为安全) */
#define    HI_IPF_MST_REGION2_END_OFFSET                   	 (0x314) /* MST端口受限的结束地址寄存器2 (属性为安全) */
#define    HI_IPF_MST_REGION3_START_OFFSET                   (0x318) /* MST端口受限的起始地址寄存器3 (属性为安全) */
#define    HI_IPF_MST_REGION3_END_OFFSET                   	 (0x31c) /* MST端口受限的结束地址寄存器3 (属性为安全) */
#define    HI_IPF_MST_DEFAULT_OFFSET                   		 (0x320) /* MST端口地址受限后，发出的默认访问地址*/
#define    HI_IPF_MST_SECCTRL_OFFSET                   	 	 (0x324) /* 地址功能开关寄存器 (属性为安全)*/
#define	   HI_IPF_REG_END_OFFSET							 (HI_IPF_MST_SECCTRL_OFFSET + 4)

/********************************************************************************/
/*    IPF 寄存器定义（项目名_模块名_寄存器名_T)        */
/********************************************************************************/
typedef union
{
    struct
    {
        unsigned int    ipf_srst                   : 1; /* [0..0] 全局软复位寄存器。0：不复位；1：复位。高电平有效。只复位逻辑不复位配置寄存器.复位可能不能立即生效，由复位状态寄存器指示复位是否成功，复位成功后写0解除软复位。 */
        unsigned int    reserved                   : 31; /* [31..1] 保留 */
    } bits;
    unsigned int    u32;
}HI_IPF_SRST_T;    /* IPF复位控制寄存器 */

typedef union
{
    struct
    {
        unsigned int    ipf_srst_state             : 1; /* [0..0] 复位状态指示寄存器。0：未处于复位状态；1：处于复位状态，表示复位成功。当逻辑处于复位状态软件可解除复位。 */
        unsigned int    reserved                   : 31; /* [31..1] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_SRST_STATE_T;    /* IPF复位状态寄存器 */

typedef union
{
    struct
    {
        unsigned int    ul_en                      : 1; /* [0..0] UL通道使能配置寄存器.0:通道关闭1:通道使能写1使能通道，立即生效.写0关闭通道,若此时通道busy，则不能立即关闭，直到通道idle后才能关闭. */
        unsigned int    dl_en                      : 1; /* [1..1] DL通道使能配置寄存器.0:通道关闭1:通道使能写1使能通道，立即生效.写0关闭通道,若此时通道busy，则不能立即关闭，直到通道idle后才能关闭. */
        unsigned int    reserved                   : 30; /* [31..2] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH_EN_T;    /* IPF 通道使能配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    ul_en_state                : 1; /* [0..0] UL通道使能状态寄存器.0:通道已关闭1:通道打开 */
        unsigned int    dl_en_state                : 1; /* [1..1] DL通道使能状态寄存器.0:通道已关闭1:通道打开 */
        unsigned int    reserved                   : 30; /* [31..2] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_EN_STATE_T;    /* IPF 通道使能状态寄存器 */

typedef union
{
    struct
    {
        unsigned int    ipf_sysclk_sel0            : 1; /* [0..0] ipf模块系统时钟门控使能。0:时钟常开1:自动门控  */
        unsigned int    ipf_sysclk_sel1            : 1; /* [1..1] ipf模块系统时钟门控使能。0:时钟常开1:自动门控  */
        unsigned int    ipf_busclk_sel             : 1; /* [2..2] ipf模块总线时钟门控使能。0:时钟常开1:自动门控 */
        unsigned int    reserved_1                 : 5; /* [7..3] 保留。 */
        unsigned int    ipf_ram0clk_sel            : 1; /* [8..8] ipf模块单口RAM时钟门控使能。0:时钟常开1:自动门控 */
        unsigned int    ipf_ram1clk_sel            : 1; /* [9..9] ipf模块双口RAM时钟门控使能。0:时钟常开1:自动门控 */
        unsigned int    reserved_0                 : 22; /* [31..10] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_GATE_T;    /* IPF时钟门控配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    filter_seq                 : 1; /* [0..0] 过滤器配置顺序指示寄存器.0:过滤器配置顺序排序1:过滤器配置乱序排序 */
        unsigned int    flt_addr_reverse           : 1; /* [1..1] 0：表示过滤器中的地址寄存器按大端排列1：表示过滤器中的地址寄存器按小端排列 */
        unsigned int    sp_cfg                     : 1; /* [2..2] 0:SP模式下DL优先级高1;SP模式下UL优先级高 */
        unsigned int    sp_wrr_sel                 : 1; /* [3..3] 0:WRR模式调度1;SP模式调度 */
        unsigned int    max_burst_len              : 2; /* [5..4] BURST最大长度配置寄存器2'b00:BURST162'b01:BURST82'b10,2'b11:BURST4 */
        unsigned int    ipv6_nh_sel                : 1; /* [6..6] IPV6 参与匹配NextNeader选择控制信号0:解析的上层报文对应的NextHeader或不识别的NextHeader(注意AH和ESP共存时NextHeader对应的时选择之后的NextHeader)1:基本头中的NextNeader */
        unsigned int    ah_esp_sel                 : 1; /* [7..7] 如果AH和ESP同时存在且均配置为参与匹配,SPI选择控制信号0:选择ESP对应的SPI参与匹配1:选择AH对应的SPI参与匹配 */
        unsigned int    ah_disable                 : 1; /* [8..8] AH SPI是否参与匹配控制信号0:参与匹配1:不参与匹配 */
        unsigned int    esp_disable                : 1; /* [9..9] ESP SPI是否参与匹配控制信号0:参与匹配1:不参与匹配 */
        unsigned int    mfc_en                     : 1; /* [10..10] 单通道多过滤器链使能0：每个通道只能支持一个过滤器链，链表头索引静态配置；1：每个通道最多支持8个过滤器链，链表头索引由BD动态配置； */
        unsigned int    mm_en                      : 1; /* [11..11] 单通道动态模式使能0：每个通道模式由通道控制寄存器静态配置；1：每个通道模式由BD中mode标志动态配置； */
        unsigned int    add_rep                    : 1; /* [12..12] 下行通道AD上报选择。0：表示RD上报目的地址使用AD的第二个字；1：表示RD上报目的地址使用AD的第一个字； */
		unsigned int    schedule_strategy          : 1; /* [13..13] 上下行通道调度策略选择。0：表示上下行通道根据BDQ是否为空进行调度；1：表示上下行通道根据ADQ、BDQ是否为空，RDQ是否为满进行调度。 */
        unsigned int    reserved                   : 19; /* [31..14] 保留 */
    } bits;
    unsigned int    u32;
}HI_IPF_CTRL_T;    /* IPF全局控制配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    ipf_wr_ch0_id              : 4; /* [3..0] AXI写通道0 ID */
        unsigned int    ipf_wr_ch1_id              : 4; /* [7..4] AXI写通道1 ID */
        unsigned int    ipf_rd_ch0_id              : 4; /* [11..8] AXI读通道0 ID */
        unsigned int    ipf_rd_ch1_id              : 4; /* [15..12] AXI读通道1 ID */
        unsigned int    ipf_wr_ch0_pri             : 3; /* [18..16] AXI写通道0优先级 */
        unsigned int    reserved_3                 : 1; /* [19..19] 保留 */
        unsigned int    ipf_wr_ch1_pri             : 3; /* [22..20] AXI写通道1优先级 */
        unsigned int    reserved_2                 : 1; /* [23..23] 保留 */
        unsigned int    ipf_rd_ch0_pri             : 3; /* [26..24] AXI读通道0优先级 */
        unsigned int    reserved_1                 : 1; /* [27..27] 保留 */
        unsigned int    ipf_rd_ch1_pri             : 3; /* [30..28] AXI读通道1优先级 */
        unsigned int    reserved_0                 : 1; /* [31..31] 保留 */
    } bits;
    unsigned int    u32;
}HI_IPF_DMA_CTRL0_T;    /* IPF DMA控制寄存器0 */

typedef union
{
    struct
    {
        unsigned int    outstanding_w              : 1; /* [0..0] 写通道outstanding使能。0：AXI master没有写outstanding操作；1：AXI master有写outstanding操作，outstanding深度为4； */
        unsigned int    outstanding_r              : 1; /* [1..1] 读通道outstanding使能。0：AXI master没有读outstanding操作；1：AXI master有读outstanding操作，outstanding深度为4； */
        unsigned int    reserved                   : 30; /* [31..2] 保留 */
    } bits;
    unsigned int    u32;
}HI_IPF_DMA_CTRL1_T;    /* IPF DMA控制寄存器1 */

typedef union
{
    struct
    {
        unsigned int    ul_rpt_int0                : 1; /* [0..0] 上行结果上报中断0 */
        unsigned int    ul_timeout_int0            : 1; /* [1..1] 上行结果上报超时中断0 */
        unsigned int    ul_disable_end_int0        : 1; /* [2..2] 上行通道关闭完成中断0 */
        unsigned int    ul_idle_cfg_bd_int0        : 1; /* [3..3] 上行通道IDLE期间软件配置BD指示中断0 */
        unsigned int    ul_trail_cfg_bd_int0       : 1; /* [4..4] 上行通道关闭但BD没有处理完期间软件继续配置BD指示中断0 */
        unsigned int    ul_noidle_clrptr_int0      : 1; /* [5..5] 上行非IDLE态清指针指示中断0 */
        unsigned int    ul_rdq_downoverflow_int0   : 1; /* [6..6] 上行RDQ下溢中断0 */
        unsigned int    ul_bdq_upoverflow_int0     : 1; /* [7..7] 上行BDQ上溢中断0 */
        unsigned int    ul_rdq_full_int0           : 1; /* [8..8] 上行RDQ满中断0 */
        unsigned int    ul_bdq_epty_int0           : 1; /* [9..9] 上行BDQ空中断0 */
        unsigned int    ul_adq0_epty_int0          : 1; /* [10..10] 上行ADQ0空中断0 */
        unsigned int    ul_adq1_epty_int0          : 1; /* [11..11] 上行ADQ1空中断0 */
        unsigned int    reserved_1                 : 4; /* [15..12] 保留 */
        unsigned int    dl_rpt_int0                : 1; /* [16..16] 下行结果上报中断0 */
        unsigned int    dl_timeout_int0            : 1; /* [17..17] 下行结果上报超时中断0 */
        unsigned int    dl_disable_end_int0        : 1; /* [18..18] 下行通道关闭完成中断0 */
        unsigned int    dl_idle_cfg_bd_int0        : 1; /* [19..19] 下行通道IDLE期间软件配置BD指示中断0 */
        unsigned int    dl_trail_cfg_bd_int0       : 1; /* [20..20] 下行通道关闭但BD没有处理完期间软件继续配置BD指示中断0 */
        unsigned int    dl_noidle_clrptr_int0      : 1; /* [21..21] 下行非IDLE态清指针指示中断0 */
        unsigned int    dl_rdq_downoverflow_int0   : 1; /* [22..22] 下行RDQ下溢中断0 */
        unsigned int    dl_bdq_upoverflow_int0     : 1; /* [23..23] 下行BDQ上溢中断0 */
        unsigned int    dl_rdq_full_int0           : 1; /* [24..24] 下行RDQ满中断0 */
        unsigned int    dl_bdq_epty_int0           : 1; /* [25..25] 下行BDQ空中断0 */
        unsigned int    dl_adq0_epty_int0          : 1; /* [26..26] 下行ADQ0空中断0 */
        unsigned int    dl_adq1_epty_int0          : 1; /* [27..27] 下行ADQ1空中断0 */
        unsigned int    reserved_0                 : 4; /* [31..28] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_INT0_T;    /* 中断上报寄存器0 */

typedef union
{
    struct
    {
        unsigned int    ul_rpt_int1                : 1; /* [0..0] 上行结果上报中断1 */
        unsigned int    ul_timeout_int1            : 1; /* [1..1] 上行结果上报超时中断1 */
        unsigned int    ul_disable_end_int1        : 1; /* [2..2] 上行通道关闭完成中断1 */
        unsigned int    ul_idle_cfg_bd_int1        : 1; /* [3..3] 上行通道IDLE期间软件配置BD指示中断1 */
        unsigned int    ul_trail_cfg_bd_int1       : 1; /* [4..4] 上行通道关闭但BD没有处理完期间软件继续配置BD指示中断1 */
        unsigned int    ul_noidle_clrptr_int1      : 1; /* [5..5] 上行非IDLE态清指针指示中断1 */
        unsigned int    ul_rdq_downoverflow_int1   : 1; /* [6..6] 上行RDQ下溢中断1 */
        unsigned int    ul_bdq_upoverflow_int1     : 1; /* [7..7] 上行BDQ上溢中断1 */
        unsigned int    ul_rdq_full_int1           : 1; /* [8..8] 上行RDQ满中断1 */
        unsigned int    ul_bdq_epty_int1           : 1; /* [9..9] 上行BDQ空中断1 */
        unsigned int    ul_adq0_epty_int1          : 1; /* [10..10] 上行ADQ0空中断1 */
        unsigned int    ul_adq1_epty_int1          : 1; /* [11..11] 上行ADQ1空中断1 */
        unsigned int    reserved_1                 : 4; /* [15..12] 保留 */
        unsigned int    dl_rpt_int1                : 1; /* [16..16] 下行结果上报中断1 */
        unsigned int    dl_timeout_int1            : 1; /* [17..17] 下行结果上报超时中断1 */
        unsigned int    dl_disable_end_int1        : 1; /* [18..18] 下行通道关闭完成中断1 */
        unsigned int    dl_idle_cfg_bd_int1        : 1; /* [19..19] 下行通道IDLE期间软件配置BD指示中断1 */
        unsigned int    dl_trail_cfg_bd_int1       : 1; /* [20..20] 下行通道关闭但BD没有处理完期间软件继续配置BD指示中断1 */
        unsigned int    dl_noidle_clrptr_int1      : 1; /* [21..21] 下行非IDLE态清指针指示中断1 */
        unsigned int    dl_rdq_downoverflow_int1   : 1; /* [22..22] 下行RDQ下溢中断1 */
        unsigned int    dl_bdq_upoverflow_int1     : 1; /* [23..23] 下行BDQ上溢中断1 */
        unsigned int    dl_rdq_full_int1           : 1; /* [24..24] 下行RDQ满中断1 */
        unsigned int    dl_bdq_epty_int1           : 1; /* [25..25] 下行BDQ空中断1 */
        unsigned int    dl_adq0_epty_int1          : 1; /* [26..26] 下行ADQ0空中断1 */
        unsigned int    dl_adq1_epty_int1          : 1; /* [27..27] 下行ADQ1空中断1 */
        unsigned int    reserved_0                 : 4; /* [31..28] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_INT1_T;    /* 中断上报寄存器1 */

typedef union
{
    struct
    {
        unsigned int    ul_rpt_mask0               : 1; /* [0..0] 上行结果上报中断屏蔽寄存器0 */
        unsigned int    ul_timeout_mask0           : 1; /* [1..1] 上行结果上报超时中断屏蔽寄存器0 */
        unsigned int    ul_disable_end_mask0       : 1; /* [2..2] 上行通道关闭完成中断屏蔽寄存器0 */
        unsigned int    ul_idle_cfg_bd_mask0       : 1; /* [3..3] 上行通道IDLE期间软件配置BD指示中断屏蔽寄存器0 */
        unsigned int    ul_trail_cfg_bd_mask0      : 1; /* [4..4] 上行通道关闭但BD没有处理完期间软件继续配置BD指示中断屏蔽寄存器0 */
        unsigned int    ul_noidle_clrptr_mask0     : 1; /* [5..5] 上行非IDLE态清指针指示中断屏蔽寄存器0 */
        unsigned int    ul_rdq_downoverflow_mask0  : 1; /* [6..6] 上行RDQ下溢中断屏蔽寄存器0 */
        unsigned int    ul_bdq_upoverflow_mask0    : 1; /* [7..7] 上行BDQ上溢中断屏蔽寄存器0 */
        unsigned int    ul_rdq_full_mask0          : 1; /* [8..8] 上行RDQ满中断屏蔽寄存器0 */
        unsigned int    ul_bdq_epty_mask0          : 1; /* [9..9] 上行BDQ空中断屏蔽寄存器0 */
        unsigned int    ul_adq0_epty_mask0         : 1; /* [10..10] 上行ADQ0空中断屏蔽寄存器0 */
        unsigned int    ul_adq1_epty_mask0         : 1; /* [11..11] 上行ADQ1空中断屏蔽寄存器0 */
        unsigned int    reserved_1                 : 4; /* [15..12] 保留 */
        unsigned int    dl_rpt_mask0               : 1; /* [16..16] 下行结果上报中断屏蔽寄存器0 */
        unsigned int    dl_timeout_mask0           : 1; /* [17..17] 下行结果上报超时中断屏蔽寄存器0 */
        unsigned int    dl_disable_end_mask0       : 1; /* [18..18] 下行通道关闭完成中断屏蔽寄存器0 */
        unsigned int    dl_idle_cfg_bd_mask0       : 1; /* [19..19] 下行通道IDLE期间软件配置BD指示中断屏蔽寄存器0 */
        unsigned int    dl_trail_cfg_bd_mask0      : 1; /* [20..20] 下行通道关闭但BD没有处理完期间软件继续配置BD指示中断屏蔽寄存器0 */
        unsigned int    dl_noidle_clrptr_mask0     : 1; /* [21..21] 下行非IDLE态清指针指示中断屏蔽寄存器0 */
        unsigned int    dl_rdq_downoverflow_mask0  : 1; /* [22..22] 下行RDQ下溢中断屏蔽寄存器0 */
        unsigned int    dl_bdq_upoverflow_mask0    : 1; /* [23..23] 下行BDQ上溢中断屏蔽寄存器0 */
        unsigned int    dl_rdq_full_mask0          : 1; /* [24..24] 下行RDQ满中断屏蔽寄存器0 */
        unsigned int    dl_bdq_epty_mask0          : 1; /* [25..25] 下行BDQ空中断屏蔽寄存器0 */
        unsigned int    dl_adq0_epty_mask0         : 1; /* [26..26] 下行ADQ0空中断屏蔽寄存器0 */
        unsigned int    dl_adq1_epty_mask0         : 1; /* [27..27] 下行ADQ1空中断屏蔽寄存器0。0 */
        unsigned int    reserved_0                 : 4; /* [31..28] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_INT_MASK0_T;    /* 中断屏蔽寄存器0 */

typedef union
{
    struct
    {
        unsigned int    ul_rpt_mask1               : 1; /* [0..0] 上行结果上报中断屏蔽寄存器1 */
        unsigned int    ul_timeout_mask1           : 1; /* [1..1] 上行结果上报超时中断屏蔽寄存器1 */
        unsigned int    ul_disable_end_mask1       : 1; /* [2..2] 上行通道关闭完成中断屏蔽寄存器1 */
        unsigned int    ul_idle_cfg_bd_mask1       : 1; /* [3..3] 上行通道IDLE期间软件配置BD指示中断屏蔽寄存器1 */
        unsigned int    ul_trail_cfg_bd_mask1      : 1; /* [4..4] 上行通道关闭但BD没有处理完期间软件继续配置BD指示中断屏蔽寄存器1 */
        unsigned int    ul_noidle_clrptr_mask1     : 1; /* [5..5] 上行非IDLE态清指针指示中断屏蔽寄存器1 */
        unsigned int    ul_rdq_downoverflow_mask1  : 1; /* [6..6] 上行RDQ下溢中断屏蔽寄存器1 */
        unsigned int    ul_bdq_upoverflow_mask1    : 1; /* [7..7] 上行BDQ上溢中断屏蔽寄存器1 */
        unsigned int    ul_rdq_full_mask1          : 1; /* [8..8] 上行RDQ满中断屏蔽寄存器1 */
        unsigned int    ul_bdq_epty_mask1          : 1; /* [9..9] 上行BDQ空中断屏蔽寄存器1 */
        unsigned int    ul_adq0_epty_mask1         : 1; /* [10..10] 上行ADQ0空中断屏蔽寄存器1 */
        unsigned int    ul_adq1_epty_mask1         : 1; /* [11..11] 上行ADQ1空中断屏蔽寄存器1 */
        unsigned int    reserved_1                 : 4; /* [15..12] 保留 */
        unsigned int    dl_rpt_mask1               : 1; /* [16..16] 下行结果上报中断屏蔽寄存器1 */
        unsigned int    dl_timeout_mask1           : 1; /* [17..17] 下行结果上报超时中断屏蔽寄存器1 */
        unsigned int    dl_disable_end_mask1       : 1; /* [18..18] 下行通道关闭完成中断屏蔽寄存器1 */
        unsigned int    dl_idle_cfg_bd_mask1       : 1; /* [19..19] 下行通道IDLE期间软件配置BD指示中断屏蔽寄存器1 */
        unsigned int    dl_trail_cfg_bd_mask1      : 1; /* [20..20] 下行通道关闭但BD没有处理完期间软件继续配置BD指示中断屏蔽寄存器1 */
        unsigned int    dl_noidle_clrptr_mask1     : 1; /* [21..21] 下行非IDLE态清指针指示中断屏蔽寄存器1 */
        unsigned int    dl_rdq_downoverflow_mask1  : 1; /* [22..22] 下行RDQ下溢中断屏蔽寄存器1 */
        unsigned int    dl_bdq_upoverflow_mask1    : 1; /* [23..23] 下行BDQ上溢中断屏蔽寄存器1 */
        unsigned int    dl_rdq_full_mask1          : 1; /* [24..24] 下行RDQ满中断屏蔽寄存器1 */
        unsigned int    dl_bdq_epty_mask1          : 1; /* [25..25] 下行BDQ空中断屏蔽寄存器1 */
        unsigned int    dl_adq0_epty_mask1         : 1; /* [26..26] 下行ADQ0空中断屏蔽寄存器1 */
        unsigned int    dl_adq1_epty_mask1         : 1; /* [27..27] 下行ADQ1空中断屏蔽寄存器1 */
        unsigned int    reserved_0                 : 4; /* [31..28] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_INT_MASK1_T;    /* 中断屏蔽寄存器1 */

typedef union
{
    struct
    {
        unsigned int    ul_rpt                     : 1; /* [0..0] 上行结果上报指示 */
        unsigned int    ul_timeout                 : 1; /* [1..1] 上行结果上报超时指示 */
        unsigned int    ul_disable_end             : 1; /* [2..2] 上行通道关闭完成指示 */
        unsigned int    ul_idle_cfg_bd             : 1; /* [3..3] 上行通道IDLE期间软件配置BD指示 */
        unsigned int    ul_trail_cfg_bd            : 1; /* [4..4] 上行通道关闭但BD没有处理完期间软件继续配置BD指示 */
        unsigned int    ul_noidle_clrptr           : 1; /* [5..5] 上行非IDLE态清指针指示 */
        unsigned int    ul_rdq_downoverflow        : 1; /* [6..6] 上行RDQ下溢指示 */
        unsigned int    ul_bdq_upoverflow          : 1; /* [7..7] 上行BDQ上溢指示 */
        unsigned int    ul_rdq_full                : 1; /* [8..8] 上行RDQ满指示 */
        unsigned int    ul_bdq_epty                : 1; /* [9..9] 上行通道BDQ空指示 */
        unsigned int    ul_adq0_epty               : 1; /* [10..10] 上行通道ADQ0空指示 */
        unsigned int    ul_adq1_epty               : 1; /* [11..11] 上行通道ADQ1空指示 */
        unsigned int    reserved_1                 : 4; /* [15..12] 保留 */
        unsigned int    dl_rpt                     : 1; /* [16..16] 下行结果上报指示 */
        unsigned int    dl_timeout                 : 1; /* [17..17] 下行结果上报超时指示 */
        unsigned int    dl_disable_end             : 1; /* [18..18] 下行通道关闭完成指示 */
        unsigned int    dl_idle_cfg_bd             : 1; /* [19..19] 下行通道IDLE期间软件配置BD指示 */
        unsigned int    dl_trail_cfg_bd            : 1; /* [20..20] 下行通道关闭但BD没有处理完期间软件继续配置BD指示 */
        unsigned int    dl_noidle_clrptr           : 1; /* [21..21] 下行非IDLE态清指针指示 */
        unsigned int    dl_rdq_downoverflow        : 1; /* [22..22] 下行RDQ下溢指示 */
        unsigned int    dl_bdq_upoverflow          : 1; /* [23..23] 下行BDQ上溢指示 */
        unsigned int    dl_rdq_full                : 1; /* [24..24] 下行RDQ满指示 */
        unsigned int    dl_bdq_epty                : 1; /* [25..25] 下行通道BDQ空指示 */
        unsigned int    dl_adq0_epty               : 1; /* [26..26] 下行通道ADQ0空指示 */
        unsigned int    dl_adq1_epty               : 1; /* [27..27] 下行通道ADQ1空指示 */
        unsigned int    reserved_0                 : 4; /* [31..28] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_INT_STATE_T;    /* 中断状态寄存器 */

typedef union
{
    struct
    {
        unsigned int    time_out_cfg               : 16; /* [15..0] 超时配置，如果两个RD间隔超时则上报中断，步长为256个时钟周期。对两个通道同时生效。 */
        unsigned int    time_out_valid             : 1; /* [16..16] 超时中断使能 */
        unsigned int    reserved                   : 15; /* [31..17] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_TIME_OUT_T;    /* 超时配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    min_pkt_len                : 14; /* [13..0] 最小包长配置寄存器，默认值为40字节（0x28） */
        unsigned int    reserved_1                 : 2; /* [15..14] 保留。 */
        unsigned int    max_pkt_len                : 14; /* [29..16] 最大包长配置寄存器，默认值为1500字节（0x5DC） */
        unsigned int    reserved_0                 : 2; /* [31..30] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_PKT_LEN_T;    /* 包长配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    ul_filter_zero_index       : 9; /* [8..0] ul基本过滤器起始索引，ul基本过滤器起始地址配置范围为0～63，扩展过滤器地址范围从64~510，如果配置为511表示上行通道无过滤器，默认值为511（0x1FF）。当mfc_en控制位有效时，这个域无效； */
        unsigned int    reserved_1                 : 7; /* [15..9] 保留。 */
        unsigned int    dl_filter_zero_index       : 9; /* [24..16] dl基本过滤器起始索引，dl基本过滤器起始地址配置范围为0～63,扩展过滤器地址范围从64~510，如果配置为511表示下行通道无过滤器，默认值为511（0x1FF）。当mfc_en控制位有效时，这个域无效； */
        unsigned int    reserved_0                 : 7; /* [31..25] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_FILTER_ZERO_INDEX_T;    /* IPF过滤器起始索引配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    ef_baddr                   : 32; /* [31..0] 扩展扩滤器起始地址，8字节对齐 */
    } bits;
    unsigned int    u32;
}HI_IPF_EF_BADDR_T;    /* 扩展过滤器基地址配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    bf_index                   : 8; /* [7..0] 基本过滤表读写地址（范围为0～63） */
        unsigned int    reserved                   : 24; /* [31..8] 保留。 */
    } bits;
    unsigned int    u32;
}HI_BFLT_INDEX_T;    /* 基本过滤表配置索引 */

typedef union
{
    struct
    {
        unsigned int    flt_chain_loop             : 1; /* [0..0] 表示过滤器链表形成环异常告警 */
        unsigned int    reserved                   : 31; /* [31..1]  */
    } bits;
    unsigned int    u32;
}HI_FLT_CHAIN_LOOP_T;    /* 过滤器链表环告警 */

typedef union
{
    struct
    {
        unsigned int    flt_laddr0                 : 32; /* [31..0] flt_addr_reverse等于0时按照字节大端排列，IPV6表示LOCAL ADDRESS {[103:96],[111:104],[119:112],[127:120]}，IPV4表示LOCAL ADDRESS {[7:0],[15:8],[23:16],[31:24]}flt_addr_reverse等于1时按照字节小端排列，IPV6表示LOCAL ADDRESS [127:96]，IPV4表示LOCAL ADDRESS [31:0] */
    } bits;
    unsigned int    u32;
}HI_FLT_LOCAL_ADDR0_T;    /* 过滤器local address配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    flt_laddr1                 : 32; /* [31..0] flt_addr_reverse等于0时按照字节大端排列，IPV6表示LOCAL ADDRESS {[71:64],[79:72],[87:80],[95:88]}flt_addr_reverse等于1时按照字节小端排列，IPV6表示LOCAL ADDRESS[95:64]IPV4保留 */
    } bits;
    unsigned int    u32;
}HI_FLT_LOCAL_ADDR1_T;    /* 过滤器local address配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    flt_laddr2                 : 32; /* [31..0] flt_addr_reverse等于0时按照字节大端排列，IPV6表示LOCAL ADDRESS {[39:32],[47:40],[55:48],[63:56]}flt_addr_reverse等于1时按照字节小端排列，IPV6表示LOCAL ADDRESS[63:32]IPV4保留 */
    } bits;
    unsigned int    u32;
}HI_FLT_LOCAL_ADDR2_T;    /* 过滤器local address配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    flt_laddr3                 : 32; /* [31..0] flt_addr_reverse等于0时按照字节大端排列，IPV6表示LOCAL ADDRESS {[7:0],[15:8],[23:16],[31:24]}flt_addr_reverse等于1时按照字节小端排列，IPV6表示LOCAL ADDRESS[31:0]IPV4保留 */
    } bits;
    unsigned int    u32;
}HI_FLT_LOCAL_ADDR3_T;    /* 过滤器local address配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    flt_raddr0                 : 32; /* [31..0] flt_addr_reverse等于0时按照字节大端排列，IPV6表示REMOTE ADDRESS {[103:96],[111:104],[119:112],[127:120]}，IPV4表示REMOTE ADDRESS {[7:0],[15:8],[23:16],[31:24]}flt_addr_reverse等于1时按照字节小端排列，IPV6表示REMOTE ADDRESS[127:96]，IPV4表示REMOTE ADDRESS[31:0] */
    } bits;
    unsigned int    u32;
}HI_FLT_REMOTE_ADDR0_T;    /* 过滤器remote address配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    flt_raddr1                 : 32; /* [31..0] flt_addr_reverse等于0时按照字节大端排列，IPV6表示REMOTE ADDRESS {[71:64],[79:72],[87:80],[95:88]}flt_addr_reverse等于1时按照字节小端排列，IPV6表示REMOTE ADDRESS[95:64]IPV4保留 */
    } bits;
    unsigned int    u32;
}HI_FLT_REMOTE_ADDR1_T;    /* 过滤器remote address配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    flt_raddr2                 : 32; /* [31..0] flt_addr_reverse等于0时按照字节大端排列，IPV6表示REMOTE ADDRESS {[39:32],[47:40],[55:48],[63:56]}flt_addr_reverse等于1时按照字节小端排列，IPV6表示REMOTE ADDRESS[63:32]IPV4保留 */
    } bits;
    unsigned int    u32;
}HI_FLT_REMOTE_ADDR2_T;    /* 过滤器remote address配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    flt_raddr3                 : 32; /* [31..0] flt_addr_reverse等于0时按照字节大端排列，IPV6表示REMOTE ADDRESS {[7:0],[15:8],[23:16],[31:24]}flt_addr_reverse等于1时按照字节小端排列，IPV6表示REMOTE ADDRESS[31:0]IPV4保留 */
    } bits;
    unsigned int    u32;
}HI_FLT_REMOTE_ADDR3_T;    /* 过滤器remote address配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    flt_raddr0_mask            : 32; /* [31..0] flt_addr_reverse等于0时按照字节大端排列，IPV6表示REMOTE ADDRESS_MASK {[103:96],[111:104],[119:112],[127:120]}IPV4表示REMOTE ADDRESS_MASK {[7:0],[15:8],[23:16],[31:24]}flt_addr_reverse等于1时按照字节小端排列，IPV6表示REMOTE ADDRESS_MASK[127:96]IPV4表示REMOTE ADDRESS_MASK[31:0] */
    } bits;
    unsigned int    u32;
}HI_FLT_REMOTE_ADDR0_MASK_T;    /* 过滤器remote address配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    flt_raddr1_mask            : 32; /* [31..0] flt_addr_reverse等于0时按照字节大端排列，IPV6表示REMOTE ADDRESS_MASK {[71:64],[79:72],[87:80],[95:88]}flt_addr_reverse等于1时按照字节小端排列，IPV6表示REMOTE ADDRESS_MASK[95:64]IPV4保留 */
    } bits;
    unsigned int    u32;
}HI_FLT_REMOTE_ADDR1_MASK_T;    /* 过滤器remote address配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    flt_raddr2_mask            : 32; /* [31..0] flt_addr_reverse等于0时按照字节大端排列，IPV6表示REMOTE ADDRESS_MASK {[39:32],[47:40],[55:48],[63:56]}flt_addr_reverse等于1时按照字节小端排列，IPV6表示REMOTE ADDRESS_MASK[63:32]IPV4保留 */
    } bits;
    unsigned int    u32;
}HI_FLT_REMOTE_ADDR2_MASK_T;    /* 过滤器remote address配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    flt_raddr3_mask            : 32; /* [31..0] flt_addr_reverse等于0时按照字节大端排列，IPV6表示REMOTE ADDRESS {[7:0],[15:8],[23:16],[31:24]}flt_addr_reverse等于1时按照字节小端排列，IPV6表示REMOTE ADDRESS[31:0]IPV4保留 */
    } bits;
    unsigned int    u32;
}HI_FLT_REMOTE_ADDR3_MASK_T;    /* 过滤器remote address配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    flt_local_port_low         : 16; /* [15..0] 过滤表LOCAL PORT低门限，字节小端排列 */
        unsigned int    flt_local_port_high        : 16; /* [31..16] 过滤表LOCAL PORT高门限，字节小端排列 */
    } bits;
    unsigned int    u32;
}HI_FLT_LOCAL_PORT_T;    /* 过滤表LOCAL PORT门限配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    flt_remote_port_low        : 16; /* [15..0] 过滤表REMOTE PORT低门限，字节小端排列 */
        unsigned int    flt_remote_port_high       : 16; /* [31..16] 过滤表REMOTE PORT高门限，字节小端排列 */
    } bits;
    unsigned int    u32;
}HI_FLT_REMOTE_PORT_T;    /* 过滤表REMOTE PORT门限配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    flt_traffic_class          : 8; /* [7..0] 过滤器业务等级域配置值IPV4为type of service域IPV6为traffic class域 */
        unsigned int    flt_traffic_class_mask     : 8; /* [15..8] 过滤器业务等级域掩码配置值 */
        unsigned int    reserved                   : 16; /* [31..16] 保留。 */
    } bits;
    unsigned int    u32;
}HI_FLT_TRAFFIC_CLASS_T;    /* 过滤表业务等级域配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    flt_local_addr_mask        : 7; /* [6..0] 过滤器local address域掩码配置值，IPV4过滤器表示32位地址掩码从低位到高位0的个数。例如flt_local_addr_mask=7'b0表示掩码等于0xffffffff；flt_local_addr_mask=7'h4表示掩码等于0xfffffff0；flt_local_addr_mask=7'h8表示掩码等于0xffffff00；IPV6过滤器表示128位地址掩码从低位到高位0的个数。 */
        unsigned int    reserved                   : 25; /* [31..7] 保留。 */
    } bits;
    unsigned int    u32;
}HI_FLT_LADD_MASK_T;    /* 过滤器local address mask域配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    flt_next_header            : 8; /* [7..0] 过滤器协议类型域配置值IPV4为protocol域IPV6为next header域 */
        unsigned int    reserved                   : 24; /* [31..8] 保留。 */
    } bits;
    unsigned int    u32;
}HI_FLT_NEXT_HEADER_T;    /* 过滤器协议类型域配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    flt_fow_lable              : 20; /* [19..0] 过滤表流标签配置寄存器，字节小端排列 */
        unsigned int    reserved                   : 12; /* [31..20] 保留。 */
    } bits;
    unsigned int    u32;
}HI_FLT_FLOW_LABEL_T;    /* 过滤器流标签域配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    flt_type                   : 8; /* [7..0] 过滤器type域配置值 */
        unsigned int    reserved_1                 : 8; /* [15..8] 保留。 */
        unsigned int    flt_code                   : 8; /* [23..16] 过滤器code域配置值 */
        unsigned int    reserved_0                 : 8; /* [31..24] 保留。 */
    } bits;
    unsigned int    u32;
}HI_FLT_ICMP_T;    /* 过滤器ICMP配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    flt_next_index             : 9; /* [8..0] 下一个过滤器对应的index */
        unsigned int    reserved_1                 : 7; /* [15..9] 保留。 */
        unsigned int    flt_pri                    : 9; /* [24..16] 过滤器优先级，flt_pri数值越小优先级越高 */
        unsigned int    reserved_0                 : 7; /* [31..25] 保留。 */
    } bits;
    unsigned int    u32;
}HI_FLT_CHAIN_T;    /* 过滤器链表域配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    flt_spi                    : 32; /* [31..0] 过滤器SPI域配置值，字节小端排列 */
    } bits;
    unsigned int    u32;
}HI_FLT_SPI_T;    /* 过滤器SPI配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    flt_en                     : 1; /* [0..0] 过滤器使能 */
        unsigned int    flt_type                   : 1; /* [1..1] 过滤器类型0：IPV41：IPV6 */
        unsigned int    reserved_2                 : 2; /* [3..2] 保留。 */
        unsigned int    flt_spi_en                 : 1; /* [4..4] 过滤器SPI域使能 */
        unsigned int    flt_code_en                : 1; /* [5..5] 过滤器ICMP CODE域使能 */
        unsigned int    flt_type_en                : 1; /* [6..6] 过滤器ICMP TYPE域使能 */
        unsigned int    flt_fl_en                  : 1; /* [7..7] 过滤器IPV6 FLOW LABLE域使能。IPV4过滤器此位保留 */
        unsigned int    flt_nh_en                  : 1; /* [8..8] 过滤器NEXT HEADER域使能IPV4为protocol域使能IPV6为next header域使能 */
        unsigned int    flt_tos_en                 : 1; /* [9..9] 过滤器TRAFFIC CLASS域使能IPV4为type of service域使能IPV6为traffic class域使能 */
        unsigned int    flt_rport_en               : 1; /* [10..10] 过滤器remote port域使能 */
        unsigned int    flt_lport_en               : 1; /* [11..11] 过滤器local port域使能 */
        unsigned int    flt_raddr_en               : 1; /* [12..12] 过滤器remote address域使能 */
        unsigned int    flt_laddr_en               : 1; /* [13..13] 过滤器local address域使能 */
        unsigned int    reserved_1                 : 2; /* [15..14] 保留。 */
        unsigned int    flt_bear_id                : 6; /* [21..16] 过滤器对应的承载号 */
        unsigned int    reserved_0                 : 10; /* [31..22] 保留。 */
    } bits;
    unsigned int    u32;
}HI_FLT_RULE_CTRL_T;    /* 过滤器规则控制配置寄存器 */

typedef union
{
    struct
    {
        unsigned int    ul_mod                     : 2; /* [1..0] 模式控制寄存器00：搬数过滤01：只过滤10 or 11：只搬数当mm_en控制位有效时，这个域无效； */
        unsigned int    ul_endian                  : 1; /* [2..2] 输入数据大小端指示0：big endian1：little endian */
        unsigned int    ul_data_chain              : 1; /* [3..3] 数据是否为链表 */
        unsigned int    ul_bdq_clr                 : 1; /* [4..4] 上行队列清除控制信号,软件配置为1则BD,读写指针清零.此寄存器逻辑自清 */
        unsigned int    ul_rdq_clr                 : 1; /* [5..5] 上行队列清除控制信号,软件配置为1则RD读写指针清零.此寄存器逻辑自清 */
        unsigned int    Reserved                   : 10; /* [15..6] 保留 */
        unsigned int    ul_wrr_value               : 16; /* [31..16] WRR值，单位字节。上下行如果配置为WRR调度模式，此配置寄存器含义为上行分配的权重。即连续服务上行ul_wrr_value节后才相应下行。除非上行没有任务下行有任务才切到下行。 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_CTRL_T;    /* 上行通道控制寄存器 */

typedef union
{
    struct
    {
        unsigned int    ul_busy                    : 1; /* [0..0] 上行busy状态指示寄存器 */
        unsigned int    ul_rdq_full                : 1; /* [1..1] 上行RDQ满状态指示寄存器 */
        unsigned int    ul_rdq_empty               : 1; /* [2..2] 上行RDQ空状态指示寄存器 */
        unsigned int    ul_bdq_full                : 1; /* [3..3] 上行BDQ满状态指示寄存器 */
        unsigned int    ul_bdq_empty               : 1; /* [4..4] 上行BDQ空状态指示寄存器 */
        unsigned int    reserved_1                 : 3; /* [7..5] 保留 */
        unsigned int    ul_rdq_rptr_invalid        : 1; /* [8..8] 上行RDQ读指针无效，表示软件配置的RDQ读指针大于RDQ SIZE */
        unsigned int    ul_bdq_wptr_invalid        : 1; /* [9..9] 上行BDQ写指针无效，表示软件配置的BDQ写指针大于BDQ SIZE */
        unsigned int    reserved_0                 : 22; /* [31..10] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_STATE_T;    /* 上行通道状态寄存器 */

typedef union
{
    struct
    {
        unsigned int    ul_bdq_baddr               : 32; /* [31..0] 上行通道BDQ起始地址,8字节对其 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_BDQ_BADDR_T;    /* 上行通道BDQ起始地址 */

typedef union
{
    struct
    {
        unsigned int    ul_bdq_size                : 8; /* [7..0] 上行通道BDQ深度 */
        unsigned int    reserved                   : 24; /* [31..8] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_BDQ_SIZE_T;    /* 上行通道BDQ深度 */

typedef union
{
    struct
    {
        unsigned int    ul_bdq_wptr                : 8; /* [7..0] 上行通道BDQ写指针，不能大于上行BDQ深度 */
        unsigned int    reserved                   : 24; /* [31..8] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_BDQ_WPTR_T;    /* 上行通道BDQ写指针 */

typedef union
{
    struct
    {
        unsigned int    ul_bdq_rptr                : 8; /* [7..0] 上行通道BDQ读指针 */
        unsigned int    reserved                   : 24; /* [31..8] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_BDQ_RPTR_T;    /* 上行通道BDQ读指针 */

typedef union
{
    struct
    {
        unsigned int    ul_bdq_waddr               : 32; /* [31..0] 上行通道BDQ写地址 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_BDQ_WADDR_T;    /* 上行通道BDQ写地址 */

typedef union
{
    struct
    {
        unsigned int    ul_bdq_raddr               : 32; /* [31..0] 上行通道BDQ读地址 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_BDQ_RADDR_T;    /* 上行通道BDQ读地址 */

typedef union
{
    struct
    {
        unsigned int    ul_rdq_baddr               : 32; /* [31..0] 上行通道RDQ起始地址,8字节对其 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_RDQ_BADDR_T;    /* 上行通道RDQ起始地址 */

typedef union
{
    struct
    {
        unsigned int    ul_rdq_size                : 8; /* [7..0] 上行通道RDQ深度 */
        unsigned int    reserved                   : 24; /* [31..8] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_RDQ_SIZE_T;    /* 上行通道RDQ深度 */

typedef union
{
    struct
    {
        unsigned int    ul_rdq_wptr                : 8; /* [7..0] 上行通道RDQ写指针 */
        unsigned int    reserved                   : 24; /* [31..8] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_RDQ_WPTR_T;    /* 上行通道RDQ写指针 */

typedef union
{
    struct
    {
        unsigned int    ul_rdq_rptr                : 8; /* [7..0] 上行通道RDQ读指针，不能大于上行RDQ深度 */
        unsigned int    reserved                   : 24; /* [31..8] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_RDQ_RPTR_T;    /* 上行通道RDQ读指针 */

typedef union
{
    struct
    {
        unsigned int    ul_rdq_waddr               : 32; /* [31..0] 上行通道RDQ写地址 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_RDQ_WADDR_T;    /* 上行通道RDQ写地址 */

typedef union
{
    struct
    {
        unsigned int    ul_rdq_raddr               : 32; /* [31..0] 上行通道RDQ读地址 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_RDQ_RADDR_T;    /* 上行通道RDQ读地址 */

typedef union
{
    struct
    {
        unsigned int    ul_bdq_depth               : 9; /* [8..0] 上行BDQ当前深度寄存器,表示BDQ中BD的个数.等于0表示空,等于(ul_bdq_size+1)表示满 */
        unsigned int    reserved_1                 : 7; /* [15..9] 保留. */
        unsigned int    ul_rdq_depth               : 9; /* [24..16] 上行RDQ当前深度寄存器,表示RDQ中RD的个数.等于0表示空,等于(ul_rdq_size+1)表示满 */
        unsigned int    reserved_0                 : 7; /* [31..25] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_DQ_DEPTH_T;    /* 上行通道队列深度指示寄存器 */

typedef union
{
    struct
    {
        unsigned int    dl_mod                     : 2; /* [1..0] 模式控制寄存器00：搬数过滤01：只过滤10 or 11：只搬数；当mm_en控制位有效时，这个域无效； */
        unsigned int    dl_endian                  : 1; /* [2..2] 输入数据大小端指示0：big endian1：little endian */
        unsigned int    dl_data_chain              : 1; /* [3..3] 数据是否为链表 */
        unsigned int    dl_bdq_clr                 : 1; /* [4..4] 下行队列清除控制信号,软件配置为1则BD读写指针清零.此寄存器逻辑自清 */
        unsigned int    dl_rdq_clr                 : 1; /* [5..5] 下行队列清除控制信号,软件配置为1则RD读写指针清零.此寄存器逻辑自清 */
        unsigned int    Reserved                   : 10; /* [15..6] 保留 */
        unsigned int    dl_wrr_value               : 16; /* [31..16] WRR值，单位字节。上下行如果配置为WRR调度模式，此配置寄存器含义为下行分配的权重。即连续服务下行dl_wrr_value节后才相应上行。除非下行没有任务上行有任务才切到上行。 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_CTRL_T;    /* 下行通道控制寄存器 */

typedef union
{
    struct
    {
        unsigned int    dl_busy                    : 1; /* [0..0] 下行busy状态指示寄存器 */
        unsigned int    dl_rdq_full                : 1; /* [1..1] 下行RDQ满状态指示寄存器 */
        unsigned int    dl_rdq_empty               : 1; /* [2..2] 下行RDQ空状态指示寄存器 */
        unsigned int    dl_bdq_full                : 1; /* [3..3] 下行BDQ满状态指示寄存器 */
        unsigned int    dl_bdq_empty               : 1; /* [4..4] 下行BDQ空状态指示寄存器 */
        unsigned int    reserved_1                 : 3; /* [7..5] 保留 */
        unsigned int    dl_rdq_rptr_invalid        : 1; /* [8..8] 下行RDQ读指针无效，表示软件配置的RDQ读指针大于RDQ SIZE */
        unsigned int    dl_bdq_wptr_invalid        : 1; /* [9..9] 下行BDQ写指针无效，表示软件配置的BDQ写指针大于BDQ SIZE */
        unsigned int    reserved_0                 : 22; /* [31..10] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_STATE_T;    /* 下行通道状态寄存器 */

typedef union
{
    struct
    {
        unsigned int    dl_bdq_baddr               : 32; /* [31..0] 下行通道BDQ起始地址,8字节对其 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_BDQ_BADDR_T;    /* 下行通道BDQ起始地址 */

typedef union
{
    struct
    {
        unsigned int    dl_bdq_size                : 8; /* [7..0] 下行通道BDQ深度 */
        unsigned int    reserved                   : 24; /* [31..8] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_BDQ_SIZE_T;    /* 下行通道BDQ深度 */

typedef union
{
    struct
    {
        unsigned int    dl_bdq_wptr                : 8; /* [7..0] 下行通道BDQ写指针，不能大于下行BDQ深度 */
        unsigned int    reserved                   : 24; /* [31..8] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_BDQ_WPTR_T;    /* 下行通道BDQ写指针 */

typedef union
{
    struct
    {
        unsigned int    dl_bdq_rptr                : 8; /* [7..0] 下行通道BDQ读指针 */
        unsigned int    reserved                   : 24; /* [31..8] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_BDQ_RPTR_T;    /* 下行通道BDQ读指针 */

typedef union
{
    struct
    {
        unsigned int    dl_bdq_waddr               : 32; /* [31..0] 下行通道BDQ写地址 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_BDQ_WADDR_T;    /* 下行通道BDQ写地址 */

typedef union
{
    struct
    {
        unsigned int    dl_bdq_raddr               : 32; /* [31..0] 下行通道BDQ读地址 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_BDQ_RADDR_T;    /* 下行通道BDQ读地址 */

typedef union
{
    struct
    {
        unsigned int    dl_rdq_baddr               : 32; /* [31..0] 下行通道RDQ起始地址,8字节对齐 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_RDQ_BADDR_T;    /* 下行通道RDQ起始地址 */

typedef union
{
    struct
    {
        unsigned int    dl_rdq_size                : 8; /* [7..0] 下行通道RDQ深度 */
        unsigned int    reserved                   : 24; /* [31..8] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_RDQ_SIZE_T;    /* 下行通道RDQ深度 */

typedef union
{
    struct
    {
        unsigned int    dl_rdq_wptr                : 8; /* [7..0] 下行通道RDQ写指针 */
        unsigned int    reserved                   : 24; /* [31..8] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_RDQ_WPTR_T;    /* 下行通道RDQ写指针 */

typedef union
{
    struct
    {
        unsigned int    dl_rdq_rptr                : 8; /* [7..0] 下行通道RDQ读指针，不能大于下行RDQ深度 */
        unsigned int    reserved                   : 24; /* [31..8] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_RDQ_RPTR_T;    /* 下行通道RDQ读指针 */

typedef union
{
    struct
    {
        unsigned int    dl_rdq_waddr               : 32; /* [31..0] 下行通道RDQ写地址 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_RDQ_WADDR_T;    /* 下行通道RDQ写地址 */

typedef union
{
    struct
    {
        unsigned int    dl_rdq_raddr               : 32; /* [31..0] 下行通道RDQ读地址 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_RDQ_RADDR_T;    /* 下行通道RDQ读地址 */

typedef union
{
    struct
    {
        unsigned int    dl_bdq_depth               : 9; /* [8..0] 下行BDQ当前深度寄存器,表示BDQ中BD的个数.等于0表示空,等于(dl_bdq_size+1)表示满 */
        unsigned int    reserved_1                 : 7; /* [15..9] 保留. */
        unsigned int    dl_rdq_depth               : 9; /* [24..16] 下行RDQ当前深度寄存器,表示RDQ中RD的个数.等于0表示空,等于(dl_rdq_size+1)表示满 */
        unsigned int    reserved_0                 : 7; /* [31..25] 保留。 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_DQ_DEPTH_T;    /* 下行通道队列深度指示寄存器 */

typedef union
{
    struct
    {
        unsigned int    ul_adq_en                  : 2; /* [1..0] 上行通道ADQ0使能。00：表示上行通道不使用ADQ；01：表示上行通道使用ADQ0；1x：表示上行通道使用ADQ0和ADQ1； */
        unsigned int    ul_adq0_size_sel           : 2; /* [3..2] 上行ADQ0大小(ul_adq0_size)选择寄存器。00：表示ADQ0的大小为32；01：表示ADQ0的大小为64；10：表示ADQ0的大小为128；11：表示ADQ0的大小为256； */
        unsigned int    ul_adq1_size_sel           : 2; /* [5..4] 上行ADQ1大小(ul_adq1_size)选择寄存器。00：表示ADQ1的大小为32；01：表示ADQ1的大小为64；10：表示ADQ1的大小为128；11：表示ADQ1的大小为256； */
        unsigned int    reserved                   : 10; /* [15..6] 保留 */
        unsigned int    ul_adq_plen_th             : 16; /* [31..16] 上行通道数据包长阈值。当上行通道两个adq都开启时，如果当前数据包长小于阈值，使用adq0的AD；否则使用adq1的AD */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_ADQ_CTRL_T;    /* 上行通道ADQ控制寄存器 */

typedef union
{
    struct
    {
        unsigned int    ul_adq0_base               : 32; /* [31..0] 上行通道目的地址描述符队列基址 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_ADQ0_BASE_T;    /* 上行通道ADQ0基址寄存器 */

typedef union
{
    struct
    {
        unsigned int    ul_adq0_empty              : 1; /* [0..0] 上行ADQ0空状态指示寄存器 */
        unsigned int    reserved_1                 : 1; /* [1..1] 保留. */
        unsigned int    ul_adq0_buf_epty           : 1; /* [2..2] 上行通道内部AD Buffer0空标志。该标志等于1表示内部AD Buffer0缓存了0个AD。 */
        unsigned int    ul_adq0_buf_full           : 1; /* [3..3] 上行通道内部AD Buffer0满标志。该标志等于1表示内部AD Buffer0缓存了2个AD。 */
        unsigned int    ul_adq0_rptr_invalid       : 1; /* [4..4] 上行ADQ0读指针无效，表示软件配置的ADQ0读指针大于ADQ0 SIZE */
        unsigned int    ul_adq0_wptr_invalid       : 1; /* [5..5] 上行ADQ0写指针无效，表示软件配置的ADQ0写指针大于ADQ0 SIZE */
        unsigned int    reserved_0                 : 26; /* [31..6] 保留 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_ADQ0_STAT_T;    /* 上行通道ADQ0状态寄存器 */

typedef union
{
    struct
    {
        unsigned int    ul_adq0_wptr               : 8; /* [7..0] 上行通道ADQ0写指针，正常工作时写指针需要软件维护。 */
        unsigned int    reserved                   : 24; /* [31..8] 保留 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_ADQ0_WPTR_T;    /* 上行通道ADQ0写指针寄存器 */

typedef union
{
    struct
    {
        unsigned int    ul_adq0_rptr               : 8; /* [7..0] 上行通道ADQ0读指针，正常工作时读指针由硬件维护。 */
        unsigned int    reserved                   : 24; /* [31..8] 保留 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_ADQ0_RPTR_T;    /* 上行通道ADQ0读指针寄存器 */

typedef union
{
    struct
    {
        unsigned int    ul_adq1_base               : 32; /* [31..0] 上行通道目的地址描述符队列基址 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_ADQ1_BASE_T;    /* 上行通道ADQ1基址寄存器 */

typedef union
{
    struct
    {
        unsigned int    ul_adq1_empty              : 1; /* [0..0] 上行ADQ1空状态指示寄存器 */
        unsigned int    reserved_1                 : 1; /* [1..1] 保留. */
        unsigned int    ul_adq1_buf_epty           : 1; /* [2..2] 上行通道内部AD Buffer1空标志。该标志等于1表示内部AD Buffer1缓存了0个AD。 */
        unsigned int    ul_adq1_buf_full           : 1; /* [3..3] 上行通道内部AD Buffer1满标志。该标志等于1表示内部AD Buffer1缓存了2个AD。 */
        unsigned int    ul_adq1_rptr_invalid       : 1; /* [4..4] 上行ADQ1读指针无效，表示软件配置的ADQ1读指针大于ADQ1 SIZE */
        unsigned int    ul_adq1_wptr_invalid       : 1; /* [5..5] 上行ADQ1写指针无效，表示软件配置的ADQ1写指针大于ADQ1 SIZE */
        unsigned int    reserved_0                 : 26; /* [31..6] 保留 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_ADQ1_STAT_T;    /* 上行通道ADQ1状态寄存器 */

typedef union
{
    struct
    {
        unsigned int    ul_adq1_wptr               : 8; /* [7..0] 上行通道ADQ1写指针，正常工作时写指针需要软件维护。 */
        unsigned int    reserved                   : 24; /* [31..8] 保留 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_ADQ1_WPTR_T;    /* 上行通道ADQ1写指针寄存器 */

typedef union
{
    struct
    {
        unsigned int    ul_adq1_rptr               : 8; /* [7..0] 上行通道ADQ1读指针，正常工作时读指针由硬件维护。 */
        unsigned int    reserved                   : 24; /* [31..8] 保留 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH0_ADQ1_RPTR_T;    /* 上行通道ADQ1读指针寄存器 */

typedef union
{
    struct
    {
        unsigned int    dl_adq_en                  : 2; /* [1..0] 下行通道ADQ0使能。00：表示下行通道不使用ADQ；01：表示下行通道使用ADQ0；1x：表示下行通道使用ADQ0和ADQ1； */
        unsigned int    dl_adq0_size_sel           : 2; /* [3..2] 下行ADQ0大小(dl_adq0_size)选择寄存器。00：表示ADQ0的大小为32；01：表示ADQ0的大小为64；10：表示ADQ0的大小为128；11：表示ADQ0的大小为256； */
        unsigned int    dl_adq1_size_sel           : 2; /* [5..4] 下行ADQ1大小(dl_adq1_size)选择寄存器。00：表示ADQ1的大小为32；01：表示ADQ1的大小为64；10：表示ADQ1的大小为128；11：表示ADQ1的大小为256； */
        unsigned int    reserved                   : 10; /* [15..6] 保留 */
        unsigned int    dl_adq_plen_th             : 16; /* [31..16] 下行通道数据包长阈值。当下行通道两个adq都开启时，如果当前数据包长小于阈值，使用adq0的AD；否则使用adq1的AD */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_ADQ_CTRL_T;    /* 下行通道ADQ控制寄存器 */

typedef union
{
    struct
    {
        unsigned int    dl_adq0_base               : 32; /* [31..0] 下行通道目的地址描述符队列基址 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_ADQ0_BASE_T;    /* 下行通道ADQ0基址寄存器 */

typedef union
{
    struct
    {
        unsigned int    dl_adq0_empty              : 1; /* [0..0] 下行ADQ0空状态指示寄存器 */
        unsigned int    reserved_1                 : 1; /* [1..1] 保留. */
        unsigned int    dl_adq0_buf_epty           : 1; /* [2..2] 下行通道内部AD Buffer0空标志。该标志等于1表示内部AD Buffer0缓存了0个AD。 */
        unsigned int    dl_adq0_buf_full           : 1; /* [3..3] 下行通道内部AD Buffer0满标志。该标志等于1表示内部AD Buffer0缓存了2个AD。 */
        unsigned int    dl_adq0_rptr_invalid       : 1; /* [4..4] 下行ADQ0读指针无效，表示软件配置的ADQ0读指针大于dl_adq0_size */
        unsigned int    dl_adq0_wptr_invalid       : 1; /* [5..5] 下行ADQ0写指针无效，表示软件配置的ADQ0写指针大于dl_adq0_size */
        unsigned int    reserved_0                 : 26; /* [31..6] 保留 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_ADQ0_STAT_T;    /* 下行通道ADQ0状态寄存器 */

typedef union
{
    struct
    {
        unsigned int    dl_adq0_wptr               : 8; /* [7..0] 下行通道ADQ0写指针，正常工作时写指针需要软件维护。 */
        unsigned int    reserved                   : 24; /* [31..8] 保留 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_ADQ0_WPTR_T;    /* 下行通道ADQ0写指针寄存器 */

typedef union
{
    struct
    {
        unsigned int    dl_adq0_rptr               : 8; /* [7..0] 下行通道ADQ0读指针，正常工作时读指针由硬件维护。 */
        unsigned int    reserved                   : 24; /* [31..8] 保留 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_ADQ0_RPTR_T;    /* 下行通道ADQ0读指针寄存器 */

typedef union
{
    struct
    {
        unsigned int    dl_adq1_base               : 32; /* [31..0] 下行通道目的地址描述符队列基址 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_ADQ1_BASE_T;    /* 下行通道ADQ1基址寄存器 */

typedef union
{
    struct
    {
        unsigned int    dl_adq1_empty              : 1; /* [0..0] 下行ADQ1空状态指示寄存器 */
        unsigned int    reserved_1                 : 1; /* [1..1] 保留. */
        unsigned int    dl_adq1_buf_epty           : 1; /* [2..2] 下行通道内部AD Buffer1空标志。该标志等于1表示内部AD Buffer1缓存了0个AD。 */
        unsigned int    dl_adq1_buf_full           : 1; /* [3..3] 下行通道内部AD Buffer1满标志。该标志等于1表示内部AD Buffer1缓存了2个AD。 */
        unsigned int    dl_adq1_rptr_invalid       : 1; /* [4..4] 下行ADQ1读指针无效，表示软件配置的ADQ1读指针大于dl_adq1_size */
        unsigned int    dl_adq1_wptr_invalid       : 1; /* [5..5] 下行ADQ1写指针无效，表示软件配置的ADQ1写指针大于dl_adq1_size */
        unsigned int    reserved_0                 : 26; /* [31..6] 保留 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_ADQ1_STAT_T;    /* 下行通道ADQ1状态寄存器 */

typedef union
{
    struct
    {
        unsigned int    dl_adq1_wptr               : 8; /* [7..0] 下行通道ADQ1写指针，正常工作时写指针需要软件维护。 */
        unsigned int    reserved                   : 24; /* [31..8] 保留 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_ADQ1_WPTR_T;    /* 下行通道ADQ1写指针寄存器 */

typedef union
{
    struct
    {
        unsigned int    dl_adq1_rptr               : 8; /* [7..0] 下行通道ADQ1读指针，正常工作时读指针由硬件维护。 */
        unsigned int    reserved                   : 24; /* [31..8] 保留 */
    } bits;
    unsigned int    u32;
}HI_IPF_CH1_ADQ1_RPTR_T;    /* 下行通道ADQ1读指针寄存器 */

#if 0
/********************************************************************************/
/*    IPF 函数（项目名_模块名_寄存器名_成员名_set)        */
/********************************************************************************/
HI_SET_GET(hi_ipf_srst_ipf_srst,ipf_srst,HI_IPF_SRST_T,HI_IPF_BASE_ADDR, HI_IPF_SRST_OFFSET)
HI_SET_GET(hi_ipf_srst_reserved,reserved,HI_IPF_SRST_T,HI_IPF_BASE_ADDR, HI_IPF_SRST_OFFSET)
HI_SET_GET(hi_ipf_srst_state_ipf_srst_state,ipf_srst_state,HI_IPF_SRST_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_SRST_STATE_OFFSET)
HI_SET_GET(hi_ipf_srst_state_reserved,reserved,HI_IPF_SRST_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_SRST_STATE_OFFSET)
HI_SET_GET(hi_ipf_ch_en_ul_en,ul_en,HI_IPF_CH_EN_T,HI_IPF_BASE_ADDR, HI_IPF_CH_EN_OFFSET)
HI_SET_GET(hi_ipf_ch_en_dl_en,dl_en,HI_IPF_CH_EN_T,HI_IPF_BASE_ADDR, HI_IPF_CH_EN_OFFSET)
HI_SET_GET(hi_ipf_ch_en_reserved,reserved,HI_IPF_CH_EN_T,HI_IPF_BASE_ADDR, HI_IPF_CH_EN_OFFSET)
HI_SET_GET(hi_ipf_en_state_ul_en_state,ul_en_state,HI_IPF_EN_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_EN_STATE_OFFSET)
HI_SET_GET(hi_ipf_en_state_dl_en_state,dl_en_state,HI_IPF_EN_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_EN_STATE_OFFSET)
HI_SET_GET(hi_ipf_en_state_reserved,reserved,HI_IPF_EN_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_EN_STATE_OFFSET)
HI_SET_GET(hi_ipf_gate_ipf_sysclk_sel0,ipf_sysclk_sel0,HI_IPF_GATE_T,HI_IPF_BASE_ADDR, HI_IPF_GATE_OFFSET)
HI_SET_GET(hi_ipf_gate_ipf_sysclk_sel1,ipf_sysclk_sel1,HI_IPF_GATE_T,HI_IPF_BASE_ADDR, HI_IPF_GATE_OFFSET)
HI_SET_GET(hi_ipf_gate_ipf_busclk_sel,ipf_busclk_sel,HI_IPF_GATE_T,HI_IPF_BASE_ADDR, HI_IPF_GATE_OFFSET)
HI_SET_GET(hi_ipf_gate_reserved_1,reserved_1,HI_IPF_GATE_T,HI_IPF_BASE_ADDR, HI_IPF_GATE_OFFSET)
HI_SET_GET(hi_ipf_gate_ipf_ram0clk_sel,ipf_ram0clk_sel,HI_IPF_GATE_T,HI_IPF_BASE_ADDR, HI_IPF_GATE_OFFSET)
HI_SET_GET(hi_ipf_gate_ipf_ram1clk_sel,ipf_ram1clk_sel,HI_IPF_GATE_T,HI_IPF_BASE_ADDR, HI_IPF_GATE_OFFSET)
HI_SET_GET(hi_ipf_gate_reserved_0,reserved_0,HI_IPF_GATE_T,HI_IPF_BASE_ADDR, HI_IPF_GATE_OFFSET)
HI_SET_GET(hi_ipf_ctrl_filter_seq,filter_seq,HI_IPF_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ctrl_flt_addr_reverse,flt_addr_reverse,HI_IPF_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ctrl_sp_cfg,sp_cfg,HI_IPF_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ctrl_sp_wrr_sel,sp_wrr_sel,HI_IPF_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ctrl_max_burst_len,max_burst_len,HI_IPF_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ctrl_ipv6_nh_sel,ipv6_nh_sel,HI_IPF_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ctrl_ah_esp_sel,ah_esp_sel,HI_IPF_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ctrl_ah_disable,ah_disable,HI_IPF_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ctrl_esp_disable,esp_disable,HI_IPF_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ctrl_mfc_en,mfc_en,HI_IPF_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ctrl_mm_en,mm_en,HI_IPF_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ctrl_add_rep,add_rep,HI_IPF_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ctrl_reserved,reserved,HI_IPF_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CTRL_OFFSET)
HI_SET_GET(hi_ipf_dma_ctrl0_ipf_wr_ch0_id,ipf_wr_ch0_id,HI_IPF_DMA_CTRL0_T,HI_IPF_BASE_ADDR, HI_IPF_DMA_CTRL0_OFFSET)
HI_SET_GET(hi_ipf_dma_ctrl0_ipf_wr_ch1_id,ipf_wr_ch1_id,HI_IPF_DMA_CTRL0_T,HI_IPF_BASE_ADDR, HI_IPF_DMA_CTRL0_OFFSET)
HI_SET_GET(hi_ipf_dma_ctrl0_ipf_rd_ch0_id,ipf_rd_ch0_id,HI_IPF_DMA_CTRL0_T,HI_IPF_BASE_ADDR, HI_IPF_DMA_CTRL0_OFFSET)
HI_SET_GET(hi_ipf_dma_ctrl0_ipf_rd_ch1_id,ipf_rd_ch1_id,HI_IPF_DMA_CTRL0_T,HI_IPF_BASE_ADDR, HI_IPF_DMA_CTRL0_OFFSET)
HI_SET_GET(hi_ipf_dma_ctrl0_ipf_wr_ch0_pri,ipf_wr_ch0_pri,HI_IPF_DMA_CTRL0_T,HI_IPF_BASE_ADDR, HI_IPF_DMA_CTRL0_OFFSET)
HI_SET_GET(hi_ipf_dma_ctrl0_reserved_3,reserved_3,HI_IPF_DMA_CTRL0_T,HI_IPF_BASE_ADDR, HI_IPF_DMA_CTRL0_OFFSET)
HI_SET_GET(hi_ipf_dma_ctrl0_ipf_wr_ch1_pri,ipf_wr_ch1_pri,HI_IPF_DMA_CTRL0_T,HI_IPF_BASE_ADDR, HI_IPF_DMA_CTRL0_OFFSET)
HI_SET_GET(hi_ipf_dma_ctrl0_reserved_2,reserved_2,HI_IPF_DMA_CTRL0_T,HI_IPF_BASE_ADDR, HI_IPF_DMA_CTRL0_OFFSET)
HI_SET_GET(hi_ipf_dma_ctrl0_ipf_rd_ch0_pri,ipf_rd_ch0_pri,HI_IPF_DMA_CTRL0_T,HI_IPF_BASE_ADDR, HI_IPF_DMA_CTRL0_OFFSET)
HI_SET_GET(hi_ipf_dma_ctrl0_reserved_1,reserved_1,HI_IPF_DMA_CTRL0_T,HI_IPF_BASE_ADDR, HI_IPF_DMA_CTRL0_OFFSET)
HI_SET_GET(hi_ipf_dma_ctrl0_ipf_rd_ch1_pri,ipf_rd_ch1_pri,HI_IPF_DMA_CTRL0_T,HI_IPF_BASE_ADDR, HI_IPF_DMA_CTRL0_OFFSET)
HI_SET_GET(hi_ipf_dma_ctrl0_reserved_0,reserved_0,HI_IPF_DMA_CTRL0_T,HI_IPF_BASE_ADDR, HI_IPF_DMA_CTRL0_OFFSET)
HI_SET_GET(hi_ipf_dma_ctrl1_outstanding_w,outstanding_w,HI_IPF_DMA_CTRL1_T,HI_IPF_BASE_ADDR, HI_IPF_DMA_CTRL1_OFFSET)
HI_SET_GET(hi_ipf_dma_ctrl1_outstanding_r,outstanding_r,HI_IPF_DMA_CTRL1_T,HI_IPF_BASE_ADDR, HI_IPF_DMA_CTRL1_OFFSET)
HI_SET_GET(hi_ipf_dma_ctrl1_reserved,reserved,HI_IPF_DMA_CTRL1_T,HI_IPF_BASE_ADDR, HI_IPF_DMA_CTRL1_OFFSET)
HI_SET_GET(hi_ipf_int0_ul_rpt_int0,ul_rpt_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_ul_timeout_int0,ul_timeout_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_ul_disable_end_int0,ul_disable_end_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_ul_idle_cfg_bd_int0,ul_idle_cfg_bd_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_ul_trail_cfg_bd_int0,ul_trail_cfg_bd_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_ul_noidle_clrptr_int0,ul_noidle_clrptr_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_ul_rdq_downoverflow_int0,ul_rdq_downoverflow_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_ul_bdq_upoverflow_int0,ul_bdq_upoverflow_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_ul_rdq_full_int0,ul_rdq_full_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_ul_bdq_epty_int0,ul_bdq_epty_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_ul_adq0_epty_int0,ul_adq0_epty_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_ul_adq1_epty_int0,ul_adq1_epty_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_reserved_1,reserved_1,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_dl_rpt_int0,dl_rpt_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_dl_timeout_int0,dl_timeout_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_dl_disable_end_int0,dl_disable_end_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_dl_idle_cfg_bd_int0,dl_idle_cfg_bd_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_dl_trail_cfg_bd_int0,dl_trail_cfg_bd_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_dl_noidle_clrptr_int0,dl_noidle_clrptr_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_dl_rdq_downoverflow_int0,dl_rdq_downoverflow_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_dl_bdq_upoverflow_int0,dl_bdq_upoverflow_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_dl_rdq_full_int0,dl_rdq_full_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_dl_bdq_epty_int0,dl_bdq_epty_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_dl_adq0_epty_int0,dl_adq0_epty_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_dl_adq1_epty_int0,dl_adq1_epty_int0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int0_reserved_0,reserved_0,HI_IPF_INT0_T,HI_IPF_BASE_ADDR, HI_IPF_INT0_OFFSET)
HI_SET_GET(hi_ipf_int1_ul_rpt_int1,ul_rpt_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_ul_timeout_int1,ul_timeout_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_ul_disable_end_int1,ul_disable_end_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_ul_idle_cfg_bd_int1,ul_idle_cfg_bd_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_ul_trail_cfg_bd_int1,ul_trail_cfg_bd_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_ul_noidle_clrptr_int1,ul_noidle_clrptr_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_ul_rdq_downoverflow_int1,ul_rdq_downoverflow_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_ul_bdq_upoverflow_int1,ul_bdq_upoverflow_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_ul_rdq_full_int1,ul_rdq_full_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_ul_bdq_epty_int1,ul_bdq_epty_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_ul_adq0_epty_int1,ul_adq0_epty_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_ul_adq1_epty_int1,ul_adq1_epty_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_reserved_1,reserved_1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_dl_rpt_int1,dl_rpt_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_dl_timeout_int1,dl_timeout_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_dl_disable_end_int1,dl_disable_end_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_dl_idle_cfg_bd_int1,dl_idle_cfg_bd_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_dl_trail_cfg_bd_int1,dl_trail_cfg_bd_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_dl_noidle_clrptr_int1,dl_noidle_clrptr_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_dl_rdq_downoverflow_int1,dl_rdq_downoverflow_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_dl_bdq_upoverflow_int1,dl_bdq_upoverflow_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_dl_rdq_full_int1,dl_rdq_full_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_dl_bdq_epty_int1,dl_bdq_epty_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_dl_adq0_epty_int1,dl_adq0_epty_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_dl_adq1_epty_int1,dl_adq1_epty_int1,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int1_reserved_0,reserved_0,HI_IPF_INT1_T,HI_IPF_BASE_ADDR, HI_IPF_INT1_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_ul_rpt_mask0,ul_rpt_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_ul_timeout_mask0,ul_timeout_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_ul_disable_end_mask0,ul_disable_end_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_ul_idle_cfg_bd_mask0,ul_idle_cfg_bd_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_ul_trail_cfg_bd_mask0,ul_trail_cfg_bd_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_ul_noidle_clrptr_mask0,ul_noidle_clrptr_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_ul_rdq_downoverflow_mask0,ul_rdq_downoverflow_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_ul_bdq_upoverflow_mask0,ul_bdq_upoverflow_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_ul_rdq_full_mask0,ul_rdq_full_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_ul_bdq_epty_mask0,ul_bdq_epty_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_ul_adq0_epty_mask0,ul_adq0_epty_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_ul_adq1_epty_mask0,ul_adq1_epty_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_reserved_1,reserved_1,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_dl_rpt_mask0,dl_rpt_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_dl_timeout_mask0,dl_timeout_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_dl_disable_end_mask0,dl_disable_end_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_dl_idle_cfg_bd_mask0,dl_idle_cfg_bd_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_dl_trail_cfg_bd_mask0,dl_trail_cfg_bd_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_dl_noidle_clrptr_mask0,dl_noidle_clrptr_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_dl_rdq_downoverflow_mask0,dl_rdq_downoverflow_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_dl_bdq_upoverflow_mask0,dl_bdq_upoverflow_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_dl_rdq_full_mask0,dl_rdq_full_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_dl_bdq_epty_mask0,dl_bdq_epty_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_dl_adq0_epty_mask0,dl_adq0_epty_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_dl_adq1_epty_mask0,dl_adq1_epty_mask0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask0_reserved_0,reserved_0,HI_IPF_INT_MASK0_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK0_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_ul_rpt_mask1,ul_rpt_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_ul_timeout_mask1,ul_timeout_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_ul_disable_end_mask1,ul_disable_end_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_ul_idle_cfg_bd_mask1,ul_idle_cfg_bd_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_ul_trail_cfg_bd_mask1,ul_trail_cfg_bd_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_ul_noidle_clrptr_mask1,ul_noidle_clrptr_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_ul_rdq_downoverflow_mask1,ul_rdq_downoverflow_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_ul_bdq_upoverflow_mask1,ul_bdq_upoverflow_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_ul_rdq_full_mask1,ul_rdq_full_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_ul_bdq_epty_mask1,ul_bdq_epty_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_ul_adq0_epty_mask1,ul_adq0_epty_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_ul_adq1_epty_mask1,ul_adq1_epty_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_reserved_1,reserved_1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_dl_rpt_mask1,dl_rpt_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_dl_timeout_mask1,dl_timeout_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_dl_disable_end_mask1,dl_disable_end_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_dl_idle_cfg_bd_mask1,dl_idle_cfg_bd_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_dl_trail_cfg_bd_mask1,dl_trail_cfg_bd_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_dl_noidle_clrptr_mask1,dl_noidle_clrptr_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_dl_rdq_downoverflow_mask1,dl_rdq_downoverflow_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_dl_bdq_upoverflow_mask1,dl_bdq_upoverflow_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_dl_rdq_full_mask1,dl_rdq_full_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_dl_bdq_epty_mask1,dl_bdq_epty_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_dl_adq0_epty_mask1,dl_adq0_epty_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_dl_adq1_epty_mask1,dl_adq1_epty_mask1,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_mask1_reserved_0,reserved_0,HI_IPF_INT_MASK1_T,HI_IPF_BASE_ADDR, HI_IPF_INT_MASK1_OFFSET)
HI_SET_GET(hi_ipf_int_state_ul_rpt,ul_rpt,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_ul_timeout,ul_timeout,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_ul_disable_end,ul_disable_end,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_ul_idle_cfg_bd,ul_idle_cfg_bd,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_ul_trail_cfg_bd,ul_trail_cfg_bd,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_ul_noidle_clrptr,ul_noidle_clrptr,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_ul_rdq_downoverflow,ul_rdq_downoverflow,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_ul_bdq_upoverflow,ul_bdq_upoverflow,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_ul_rdq_full,ul_rdq_full,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_ul_bdq_epty,ul_bdq_epty,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_ul_adq0_epty,ul_adq0_epty,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_ul_adq1_epty,ul_adq1_epty,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_reserved_1,reserved_1,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_dl_rpt,dl_rpt,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_dl_timeout,dl_timeout,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_dl_disable_end,dl_disable_end,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_dl_idle_cfg_bd,dl_idle_cfg_bd,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_dl_trail_cfg_bd,dl_trail_cfg_bd,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_dl_noidle_clrptr,dl_noidle_clrptr,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_dl_rdq_downoverflow,dl_rdq_downoverflow,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_dl_bdq_upoverflow,dl_bdq_upoverflow,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_dl_rdq_full,dl_rdq_full,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_dl_bdq_epty,dl_bdq_epty,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_dl_adq0_epty,dl_adq0_epty,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_dl_adq1_epty,dl_adq1_epty,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_int_state_reserved_0,reserved_0,HI_IPF_INT_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_INT_STATE_OFFSET)
HI_SET_GET(hi_ipf_time_out_time_out_cfg,time_out_cfg,HI_IPF_TIME_OUT_T,HI_IPF_BASE_ADDR, HI_IPF_TIME_OUT_OFFSET)
HI_SET_GET(hi_ipf_time_out_time_out_valid,time_out_valid,HI_IPF_TIME_OUT_T,HI_IPF_BASE_ADDR, HI_IPF_TIME_OUT_OFFSET)
HI_SET_GET(hi_ipf_time_out_reserved,reserved,HI_IPF_TIME_OUT_T,HI_IPF_BASE_ADDR, HI_IPF_TIME_OUT_OFFSET)
HI_SET_GET(hi_ipf_pkt_len_min_pkt_len,min_pkt_len,HI_IPF_PKT_LEN_T,HI_IPF_BASE_ADDR, HI_IPF_PKT_LEN_OFFSET)
HI_SET_GET(hi_ipf_pkt_len_reserved_1,reserved_1,HI_IPF_PKT_LEN_T,HI_IPF_BASE_ADDR, HI_IPF_PKT_LEN_OFFSET)
HI_SET_GET(hi_ipf_pkt_len_max_pkt_len,max_pkt_len,HI_IPF_PKT_LEN_T,HI_IPF_BASE_ADDR, HI_IPF_PKT_LEN_OFFSET)
HI_SET_GET(hi_ipf_pkt_len_reserved_0,reserved_0,HI_IPF_PKT_LEN_T,HI_IPF_BASE_ADDR, HI_IPF_PKT_LEN_OFFSET)
HI_SET_GET(hi_ipf_filter_zero_index_ul_filter_zero_index,ul_filter_zero_index,HI_IPF_FILTER_ZERO_INDEX_T,HI_IPF_BASE_ADDR, HI_IPF_FILTER_ZERO_INDEX_OFFSET)
HI_SET_GET(hi_ipf_filter_zero_index_reserved_1,reserved_1,HI_IPF_FILTER_ZERO_INDEX_T,HI_IPF_BASE_ADDR, HI_IPF_FILTER_ZERO_INDEX_OFFSET)
HI_SET_GET(hi_ipf_filter_zero_index_dl_filter_zero_index,dl_filter_zero_index,HI_IPF_FILTER_ZERO_INDEX_T,HI_IPF_BASE_ADDR, HI_IPF_FILTER_ZERO_INDEX_OFFSET)
HI_SET_GET(hi_ipf_filter_zero_index_reserved_0,reserved_0,HI_IPF_FILTER_ZERO_INDEX_T,HI_IPF_BASE_ADDR, HI_IPF_FILTER_ZERO_INDEX_OFFSET)
HI_SET_GET(hi_ipf_ef_baddr_ef_baddr,ef_baddr,HI_IPF_EF_BADDR_T,HI_IPF_BASE_ADDR, HI_IPF_EF_BADDR_OFFSET)
HI_SET_GET(hi_bflt_index_bf_index,bf_index,HI_BFLT_INDEX_T,HI_IPF_BASE_ADDR, HI_BFLT_INDEX_OFFSET)
HI_SET_GET(hi_bflt_index_reserved,reserved,HI_BFLT_INDEX_T,HI_IPF_BASE_ADDR, HI_BFLT_INDEX_OFFSET)
HI_SET_GET(hi_flt_chain_loop_flt_chain_loop,flt_chain_loop,HI_FLT_CHAIN_LOOP_T,HI_IPF_BASE_ADDR, HI_FLT_CHAIN_LOOP_OFFSET)
HI_SET_GET(hi_flt_chain_loop_reserved,reserved,HI_FLT_CHAIN_LOOP_T,HI_IPF_BASE_ADDR, HI_FLT_CHAIN_LOOP_OFFSET)
HI_SET_GET(hi_flt_local_addr0_flt_laddr0,flt_laddr0,HI_FLT_LOCAL_ADDR0_T,HI_IPF_BASE_ADDR, HI_FLT_LOCAL_ADDR0_OFFSET)
HI_SET_GET(hi_flt_local_addr1_flt_laddr1,flt_laddr1,HI_FLT_LOCAL_ADDR1_T,HI_IPF_BASE_ADDR, HI_FLT_LOCAL_ADDR1_OFFSET)
HI_SET_GET(hi_flt_local_addr2_flt_laddr2,flt_laddr2,HI_FLT_LOCAL_ADDR2_T,HI_IPF_BASE_ADDR, HI_FLT_LOCAL_ADDR2_OFFSET)
HI_SET_GET(hi_flt_local_addr3_flt_laddr3,flt_laddr3,HI_FLT_LOCAL_ADDR3_T,HI_IPF_BASE_ADDR, HI_FLT_LOCAL_ADDR3_OFFSET)
HI_SET_GET(hi_flt_remote_addr0_flt_raddr0,flt_raddr0,HI_FLT_REMOTE_ADDR0_T,HI_IPF_BASE_ADDR, HI_FLT_REMOTE_ADDR0_OFFSET)
HI_SET_GET(hi_flt_remote_addr1_flt_raddr1,flt_raddr1,HI_FLT_REMOTE_ADDR1_T,HI_IPF_BASE_ADDR, HI_FLT_REMOTE_ADDR1_OFFSET)
HI_SET_GET(hi_flt_remote_addr2_flt_raddr2,flt_raddr2,HI_FLT_REMOTE_ADDR2_T,HI_IPF_BASE_ADDR, HI_FLT_REMOTE_ADDR2_OFFSET)
HI_SET_GET(hi_flt_remote_addr3_flt_raddr3,flt_raddr3,HI_FLT_REMOTE_ADDR3_T,HI_IPF_BASE_ADDR, HI_FLT_REMOTE_ADDR3_OFFSET)
HI_SET_GET(hi_flt_remote_addr0_mask_flt_raddr0_mask,flt_raddr0_mask,HI_FLT_REMOTE_ADDR0_MASK_T,HI_IPF_BASE_ADDR, HI_FLT_REMOTE_ADDR0_MASK_OFFSET)
HI_SET_GET(hi_flt_remote_addr1_mask_flt_raddr1_mask,flt_raddr1_mask,HI_FLT_REMOTE_ADDR1_MASK_T,HI_IPF_BASE_ADDR, HI_FLT_REMOTE_ADDR1_MASK_OFFSET)
HI_SET_GET(hi_flt_remote_addr2_mask_flt_raddr2_mask,flt_raddr2_mask,HI_FLT_REMOTE_ADDR2_MASK_T,HI_IPF_BASE_ADDR, HI_FLT_REMOTE_ADDR2_MASK_OFFSET)
HI_SET_GET(hi_flt_remote_addr3_mask_flt_raddr3_mask,flt_raddr3_mask,HI_FLT_REMOTE_ADDR3_MASK_T,HI_IPF_BASE_ADDR, HI_FLT_REMOTE_ADDR3_MASK_OFFSET)
HI_SET_GET(hi_flt_local_port_flt_local_port_low,flt_local_port_low,HI_FLT_LOCAL_PORT_T,HI_IPF_BASE_ADDR, HI_FLT_LOCAL_PORT_OFFSET)
HI_SET_GET(hi_flt_local_port_flt_local_port_high,flt_local_port_high,HI_FLT_LOCAL_PORT_T,HI_IPF_BASE_ADDR, HI_FLT_LOCAL_PORT_OFFSET)
HI_SET_GET(hi_flt_remote_port_flt_remote_port_low,flt_remote_port_low,HI_FLT_REMOTE_PORT_T,HI_IPF_BASE_ADDR, HI_FLT_REMOTE_PORT_OFFSET)
HI_SET_GET(hi_flt_remote_port_flt_remote_port_high,flt_remote_port_high,HI_FLT_REMOTE_PORT_T,HI_IPF_BASE_ADDR, HI_FLT_REMOTE_PORT_OFFSET)
HI_SET_GET(hi_flt_traffic_class_flt_traffic_class,flt_traffic_class,HI_FLT_TRAFFIC_CLASS_T,HI_IPF_BASE_ADDR, HI_FLT_TRAFFIC_CLASS_OFFSET)
HI_SET_GET(hi_flt_traffic_class_flt_traffic_class_mask,flt_traffic_class_mask,HI_FLT_TRAFFIC_CLASS_T,HI_IPF_BASE_ADDR, HI_FLT_TRAFFIC_CLASS_OFFSET)
HI_SET_GET(hi_flt_traffic_class_reserved,reserved,HI_FLT_TRAFFIC_CLASS_T,HI_IPF_BASE_ADDR, HI_FLT_TRAFFIC_CLASS_OFFSET)
HI_SET_GET(hi_flt_ladd_mask_flt_local_addr_mask,flt_local_addr_mask,HI_FLT_LADD_MASK_T,HI_IPF_BASE_ADDR, HI_FLT_LADD_MASK_OFFSET)
HI_SET_GET(hi_flt_ladd_mask_reserved,reserved,HI_FLT_LADD_MASK_T,HI_IPF_BASE_ADDR, HI_FLT_LADD_MASK_OFFSET)
HI_SET_GET(hi_flt_next_header_flt_next_header,flt_next_header,HI_FLT_NEXT_HEADER_T,HI_IPF_BASE_ADDR, HI_FLT_NEXT_HEADER_OFFSET)
HI_SET_GET(hi_flt_next_header_reserved,reserved,HI_FLT_NEXT_HEADER_T,HI_IPF_BASE_ADDR, HI_FLT_NEXT_HEADER_OFFSET)
HI_SET_GET(hi_flt_flow_label_flt_fow_lable,flt_fow_lable,HI_FLT_FLOW_LABEL_T,HI_IPF_BASE_ADDR, HI_FLT_FLOW_LABEL_OFFSET)
HI_SET_GET(hi_flt_flow_label_reserved,reserved,HI_FLT_FLOW_LABEL_T,HI_IPF_BASE_ADDR, HI_FLT_FLOW_LABEL_OFFSET)
HI_SET_GET(hi_flt_icmp_flt_type,flt_type,HI_FLT_ICMP_T,HI_IPF_BASE_ADDR, HI_FLT_ICMP_OFFSET)
HI_SET_GET(hi_flt_icmp_reserved_1,reserved_1,HI_FLT_ICMP_T,HI_IPF_BASE_ADDR, HI_FLT_ICMP_OFFSET)
HI_SET_GET(hi_flt_icmp_flt_code,flt_code,HI_FLT_ICMP_T,HI_IPF_BASE_ADDR, HI_FLT_ICMP_OFFSET)
HI_SET_GET(hi_flt_icmp_reserved_0,reserved_0,HI_FLT_ICMP_T,HI_IPF_BASE_ADDR, HI_FLT_ICMP_OFFSET)
HI_SET_GET(hi_flt_chain_flt_next_index,flt_next_index,HI_FLT_CHAIN_T,HI_IPF_BASE_ADDR, HI_FLT_CHAIN_OFFSET)
HI_SET_GET(hi_flt_chain_reserved_1,reserved_1,HI_FLT_CHAIN_T,HI_IPF_BASE_ADDR, HI_FLT_CHAIN_OFFSET)
HI_SET_GET(hi_flt_chain_flt_pri,flt_pri,HI_FLT_CHAIN_T,HI_IPF_BASE_ADDR, HI_FLT_CHAIN_OFFSET)
HI_SET_GET(hi_flt_chain_reserved_0,reserved_0,HI_FLT_CHAIN_T,HI_IPF_BASE_ADDR, HI_FLT_CHAIN_OFFSET)
HI_SET_GET(hi_flt_spi_flt_spi,flt_spi,HI_FLT_SPI_T,HI_IPF_BASE_ADDR, HI_FLT_SPI_OFFSET)
HI_SET_GET(hi_flt_rule_ctrl_flt_en,flt_en,HI_FLT_RULE_CTRL_T,HI_IPF_BASE_ADDR, HI_FLT_RULE_CTRL_OFFSET)
HI_SET_GET(hi_flt_rule_ctrl_flt_type,flt_type,HI_FLT_RULE_CTRL_T,HI_IPF_BASE_ADDR, HI_FLT_RULE_CTRL_OFFSET)
HI_SET_GET(hi_flt_rule_ctrl_reserved_2,reserved_2,HI_FLT_RULE_CTRL_T,HI_IPF_BASE_ADDR, HI_FLT_RULE_CTRL_OFFSET)
HI_SET_GET(hi_flt_rule_ctrl_flt_spi_en,flt_spi_en,HI_FLT_RULE_CTRL_T,HI_IPF_BASE_ADDR, HI_FLT_RULE_CTRL_OFFSET)
HI_SET_GET(hi_flt_rule_ctrl_flt_code_en,flt_code_en,HI_FLT_RULE_CTRL_T,HI_IPF_BASE_ADDR, HI_FLT_RULE_CTRL_OFFSET)
HI_SET_GET(hi_flt_rule_ctrl_flt_type_en,flt_type_en,HI_FLT_RULE_CTRL_T,HI_IPF_BASE_ADDR, HI_FLT_RULE_CTRL_OFFSET)
HI_SET_GET(hi_flt_rule_ctrl_flt_fl_en,flt_fl_en,HI_FLT_RULE_CTRL_T,HI_IPF_BASE_ADDR, HI_FLT_RULE_CTRL_OFFSET)
HI_SET_GET(hi_flt_rule_ctrl_flt_nh_en,flt_nh_en,HI_FLT_RULE_CTRL_T,HI_IPF_BASE_ADDR, HI_FLT_RULE_CTRL_OFFSET)
HI_SET_GET(hi_flt_rule_ctrl_flt_tos_en,flt_tos_en,HI_FLT_RULE_CTRL_T,HI_IPF_BASE_ADDR, HI_FLT_RULE_CTRL_OFFSET)
HI_SET_GET(hi_flt_rule_ctrl_flt_rport_en,flt_rport_en,HI_FLT_RULE_CTRL_T,HI_IPF_BASE_ADDR, HI_FLT_RULE_CTRL_OFFSET)
HI_SET_GET(hi_flt_rule_ctrl_flt_lport_en,flt_lport_en,HI_FLT_RULE_CTRL_T,HI_IPF_BASE_ADDR, HI_FLT_RULE_CTRL_OFFSET)
HI_SET_GET(hi_flt_rule_ctrl_flt_raddr_en,flt_raddr_en,HI_FLT_RULE_CTRL_T,HI_IPF_BASE_ADDR, HI_FLT_RULE_CTRL_OFFSET)
HI_SET_GET(hi_flt_rule_ctrl_flt_laddr_en,flt_laddr_en,HI_FLT_RULE_CTRL_T,HI_IPF_BASE_ADDR, HI_FLT_RULE_CTRL_OFFSET)
HI_SET_GET(hi_flt_rule_ctrl_reserved_1,reserved_1,HI_FLT_RULE_CTRL_T,HI_IPF_BASE_ADDR, HI_FLT_RULE_CTRL_OFFSET)
HI_SET_GET(hi_flt_rule_ctrl_flt_bear_id,flt_bear_id,HI_FLT_RULE_CTRL_T,HI_IPF_BASE_ADDR, HI_FLT_RULE_CTRL_OFFSET)
HI_SET_GET(hi_flt_rule_ctrl_reserved_0,reserved_0,HI_FLT_RULE_CTRL_T,HI_IPF_BASE_ADDR, HI_FLT_RULE_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch0_ctrl_ul_mod,ul_mod,HI_IPF_CH0_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch0_ctrl_ul_endian,ul_endian,HI_IPF_CH0_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch0_ctrl_ul_data_chain,ul_data_chain,HI_IPF_CH0_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch0_ctrl_ul_bdq_clr,ul_bdq_clr,HI_IPF_CH0_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch0_ctrl_ul_rdq_clr,ul_rdq_clr,HI_IPF_CH0_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch0_ctrl_reserved,reserved,HI_IPF_CH0_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch0_ctrl_ul_wrr_value,ul_wrr_value,HI_IPF_CH0_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch0_state_ul_busy,ul_busy,HI_IPF_CH0_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_STATE_OFFSET)
HI_SET_GET(hi_ipf_ch0_state_ul_rdq_full,ul_rdq_full,HI_IPF_CH0_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_STATE_OFFSET)
HI_SET_GET(hi_ipf_ch0_state_ul_rdq_empty,ul_rdq_empty,HI_IPF_CH0_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_STATE_OFFSET)
HI_SET_GET(hi_ipf_ch0_state_ul_bdq_full,ul_bdq_full,HI_IPF_CH0_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_STATE_OFFSET)
HI_SET_GET(hi_ipf_ch0_state_ul_bdq_empty,ul_bdq_empty,HI_IPF_CH0_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_STATE_OFFSET)
HI_SET_GET(hi_ipf_ch0_state_reserved_1,reserved_1,HI_IPF_CH0_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_STATE_OFFSET)
HI_SET_GET(hi_ipf_ch0_state_ul_rdq_rptr_invalid,ul_rdq_rptr_invalid,HI_IPF_CH0_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_STATE_OFFSET)
HI_SET_GET(hi_ipf_ch0_state_ul_bdq_wptr_invalid,ul_bdq_wptr_invalid,HI_IPF_CH0_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_STATE_OFFSET)
HI_SET_GET(hi_ipf_ch0_state_reserved_0,reserved_0,HI_IPF_CH0_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_STATE_OFFSET)
HI_SET_GET(hi_ipf_ch0_bdq_baddr_ul_bdq_baddr,ul_bdq_baddr,HI_IPF_CH0_BDQ_BADDR_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_BDQ_BADDR_OFFSET)
HI_SET_GET(hi_ipf_ch0_bdq_size_ul_bdq_size,ul_bdq_size,HI_IPF_CH0_BDQ_SIZE_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_BDQ_SIZE_OFFSET)
HI_SET_GET(hi_ipf_ch0_bdq_size_reserved,reserved,HI_IPF_CH0_BDQ_SIZE_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_BDQ_SIZE_OFFSET)
HI_SET_GET(hi_ipf_ch0_bdq_wptr_ul_bdq_wptr,ul_bdq_wptr,HI_IPF_CH0_BDQ_WPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_BDQ_WPTR_OFFSET)
HI_SET_GET(hi_ipf_ch0_bdq_wptr_reserved,reserved,HI_IPF_CH0_BDQ_WPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_BDQ_WPTR_OFFSET)
HI_SET_GET(hi_ipf_ch0_bdq_rptr_ul_bdq_rptr,ul_bdq_rptr,HI_IPF_CH0_BDQ_RPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_BDQ_RPTR_OFFSET)
HI_SET_GET(hi_ipf_ch0_bdq_rptr_reserved,reserved,HI_IPF_CH0_BDQ_RPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_BDQ_RPTR_OFFSET)
HI_SET_GET(hi_ipf_ch0_bdq_waddr_ul_bdq_waddr,ul_bdq_waddr,HI_IPF_CH0_BDQ_WADDR_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_BDQ_WADDR_OFFSET)
HI_SET_GET(hi_ipf_ch0_bdq_raddr_ul_bdq_raddr,ul_bdq_raddr,HI_IPF_CH0_BDQ_RADDR_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_BDQ_RADDR_OFFSET)
HI_SET_GET(hi_ipf_ch0_rdq_baddr_ul_rdq_baddr,ul_rdq_baddr,HI_IPF_CH0_RDQ_BADDR_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_RDQ_BADDR_OFFSET)
HI_SET_GET(hi_ipf_ch0_rdq_size_ul_rdq_size,ul_rdq_size,HI_IPF_CH0_RDQ_SIZE_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_RDQ_SIZE_OFFSET)
HI_SET_GET(hi_ipf_ch0_rdq_size_reserved,reserved,HI_IPF_CH0_RDQ_SIZE_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_RDQ_SIZE_OFFSET)
HI_SET_GET(hi_ipf_ch0_rdq_wptr_ul_rdq_wptr,ul_rdq_wptr,HI_IPF_CH0_RDQ_WPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_RDQ_WPTR_OFFSET)
HI_SET_GET(hi_ipf_ch0_rdq_wptr_reserved,reserved,HI_IPF_CH0_RDQ_WPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_RDQ_WPTR_OFFSET)
HI_SET_GET(hi_ipf_ch0_rdq_rptr_ul_rdq_rptr,ul_rdq_rptr,HI_IPF_CH0_RDQ_RPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_RDQ_RPTR_OFFSET)
HI_SET_GET(hi_ipf_ch0_rdq_rptr_reserved,reserved,HI_IPF_CH0_RDQ_RPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_RDQ_RPTR_OFFSET)
HI_SET_GET(hi_ipf_ch0_rdq_waddr_ul_rdq_waddr,ul_rdq_waddr,HI_IPF_CH0_RDQ_WADDR_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_RDQ_WADDR_OFFSET)
HI_SET_GET(hi_ipf_ch0_rdq_raddr_ul_rdq_raddr,ul_rdq_raddr,HI_IPF_CH0_RDQ_RADDR_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_RDQ_RADDR_OFFSET)
HI_SET_GET(hi_ipf_ch0_dq_depth_ul_bdq_depth,ul_bdq_depth,HI_IPF_CH0_DQ_DEPTH_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_DQ_DEPTH_OFFSET)
HI_SET_GET(hi_ipf_ch0_dq_depth_reserved_1,reserved_1,HI_IPF_CH0_DQ_DEPTH_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_DQ_DEPTH_OFFSET)
HI_SET_GET(hi_ipf_ch0_dq_depth_ul_rdq_depth,ul_rdq_depth,HI_IPF_CH0_DQ_DEPTH_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_DQ_DEPTH_OFFSET)
HI_SET_GET(hi_ipf_ch0_dq_depth_reserved_0,reserved_0,HI_IPF_CH0_DQ_DEPTH_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_DQ_DEPTH_OFFSET)
HI_SET_GET(hi_ipf_ch1_ctrl_dl_mod,dl_mod,HI_IPF_CH1_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch1_ctrl_dl_endian,dl_endian,HI_IPF_CH1_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch1_ctrl_dl_data_chain,dl_data_chain,HI_IPF_CH1_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch1_ctrl_dl_bdq_clr,dl_bdq_clr,HI_IPF_CH1_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch1_ctrl_dl_rdq_clr,dl_rdq_clr,HI_IPF_CH1_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch1_ctrl_reserved,reserved,HI_IPF_CH1_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch1_ctrl_dl_wrr_value,dl_wrr_value,HI_IPF_CH1_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch1_state_dl_busy,dl_busy,HI_IPF_CH1_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_STATE_OFFSET)
HI_SET_GET(hi_ipf_ch1_state_dl_rdq_full,dl_rdq_full,HI_IPF_CH1_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_STATE_OFFSET)
HI_SET_GET(hi_ipf_ch1_state_dl_rdq_empty,dl_rdq_empty,HI_IPF_CH1_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_STATE_OFFSET)
HI_SET_GET(hi_ipf_ch1_state_dl_bdq_full,dl_bdq_full,HI_IPF_CH1_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_STATE_OFFSET)
HI_SET_GET(hi_ipf_ch1_state_dl_bdq_empty,dl_bdq_empty,HI_IPF_CH1_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_STATE_OFFSET)
HI_SET_GET(hi_ipf_ch1_state_reserved_1,reserved_1,HI_IPF_CH1_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_STATE_OFFSET)
HI_SET_GET(hi_ipf_ch1_state_dl_rdq_rptr_invalid,dl_rdq_rptr_invalid,HI_IPF_CH1_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_STATE_OFFSET)
HI_SET_GET(hi_ipf_ch1_state_dl_bdq_wptr_invalid,dl_bdq_wptr_invalid,HI_IPF_CH1_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_STATE_OFFSET)
HI_SET_GET(hi_ipf_ch1_state_reserved_0,reserved_0,HI_IPF_CH1_STATE_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_STATE_OFFSET)
HI_SET_GET(hi_ipf_ch1_bdq_baddr_dl_bdq_baddr,dl_bdq_baddr,HI_IPF_CH1_BDQ_BADDR_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_BDQ_BADDR_OFFSET)
HI_SET_GET(hi_ipf_ch1_bdq_size_dl_bdq_size,dl_bdq_size,HI_IPF_CH1_BDQ_SIZE_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_BDQ_SIZE_OFFSET)
HI_SET_GET(hi_ipf_ch1_bdq_size_reserved,reserved,HI_IPF_CH1_BDQ_SIZE_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_BDQ_SIZE_OFFSET)
HI_SET_GET(hi_ipf_ch1_bdq_wptr_dl_bdq_wptr,dl_bdq_wptr,HI_IPF_CH1_BDQ_WPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_BDQ_WPTR_OFFSET)
HI_SET_GET(hi_ipf_ch1_bdq_wptr_reserved,reserved,HI_IPF_CH1_BDQ_WPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_BDQ_WPTR_OFFSET)
HI_SET_GET(hi_ipf_ch1_bdq_rptr_dl_bdq_rptr,dl_bdq_rptr,HI_IPF_CH1_BDQ_RPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_BDQ_RPTR_OFFSET)
HI_SET_GET(hi_ipf_ch1_bdq_rptr_reserved,reserved,HI_IPF_CH1_BDQ_RPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_BDQ_RPTR_OFFSET)
HI_SET_GET(hi_ipf_ch1_bdq_waddr_dl_bdq_waddr,dl_bdq_waddr,HI_IPF_CH1_BDQ_WADDR_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_BDQ_WADDR_OFFSET)
HI_SET_GET(hi_ipf_ch1_bdq_raddr_dl_bdq_raddr,dl_bdq_raddr,HI_IPF_CH1_BDQ_RADDR_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_BDQ_RADDR_OFFSET)
HI_SET_GET(hi_ipf_ch1_rdq_baddr_dl_rdq_baddr,dl_rdq_baddr,HI_IPF_CH1_RDQ_BADDR_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_RDQ_BADDR_OFFSET)
HI_SET_GET(hi_ipf_ch1_rdq_size_dl_rdq_size,dl_rdq_size,HI_IPF_CH1_RDQ_SIZE_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_RDQ_SIZE_OFFSET)
HI_SET_GET(hi_ipf_ch1_rdq_size_reserved,reserved,HI_IPF_CH1_RDQ_SIZE_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_RDQ_SIZE_OFFSET)
HI_SET_GET(hi_ipf_ch1_rdq_wptr_dl_rdq_wptr,dl_rdq_wptr,HI_IPF_CH1_RDQ_WPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_RDQ_WPTR_OFFSET)
HI_SET_GET(hi_ipf_ch1_rdq_wptr_reserved,reserved,HI_IPF_CH1_RDQ_WPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_RDQ_WPTR_OFFSET)
HI_SET_GET(hi_ipf_ch1_rdq_rptr_dl_rdq_rptr,dl_rdq_rptr,HI_IPF_CH1_RDQ_RPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_RDQ_RPTR_OFFSET)
HI_SET_GET(hi_ipf_ch1_rdq_rptr_reserved,reserved,HI_IPF_CH1_RDQ_RPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_RDQ_RPTR_OFFSET)
HI_SET_GET(hi_ipf_ch1_rdq_waddr_dl_rdq_waddr,dl_rdq_waddr,HI_IPF_CH1_RDQ_WADDR_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_RDQ_WADDR_OFFSET)
HI_SET_GET(hi_ipf_ch1_rdq_raddr_dl_rdq_raddr,dl_rdq_raddr,HI_IPF_CH1_RDQ_RADDR_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_RDQ_RADDR_OFFSET)
HI_SET_GET(hi_ipf_ch1_dq_depth_dl_bdq_depth,dl_bdq_depth,HI_IPF_CH1_DQ_DEPTH_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_DQ_DEPTH_OFFSET)
HI_SET_GET(hi_ipf_ch1_dq_depth_reserved_1,reserved_1,HI_IPF_CH1_DQ_DEPTH_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_DQ_DEPTH_OFFSET)
HI_SET_GET(hi_ipf_ch1_dq_depth_dl_rdq_depth,dl_rdq_depth,HI_IPF_CH1_DQ_DEPTH_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_DQ_DEPTH_OFFSET)
HI_SET_GET(hi_ipf_ch1_dq_depth_reserved_0,reserved_0,HI_IPF_CH1_DQ_DEPTH_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_DQ_DEPTH_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq_ctrl_ul_adq_en,ul_adq_en,HI_IPF_CH0_ADQ_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq_ctrl_ul_adq0_size_sel,ul_adq0_size_sel,HI_IPF_CH0_ADQ_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq_ctrl_ul_adq1_size_sel,ul_adq1_size_sel,HI_IPF_CH0_ADQ_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq_ctrl_reserved,reserved,HI_IPF_CH0_ADQ_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq_ctrl_ul_adq_plen_th,ul_adq_plen_th,HI_IPF_CH0_ADQ_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq0_base_ul_adq0_base,ul_adq0_base,HI_IPF_CH0_ADQ0_BASE_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ0_BASE_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq0_stat_ul_adq0_empty,ul_adq0_empty,HI_IPF_CH0_ADQ0_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ0_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq0_stat_reserved_1,reserved_1,HI_IPF_CH0_ADQ0_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ0_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq0_stat_ul_adq0_buf_epty,ul_adq0_buf_epty,HI_IPF_CH0_ADQ0_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ0_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq0_stat_ul_adq0_buf_full,ul_adq0_buf_full,HI_IPF_CH0_ADQ0_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ0_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq0_stat_ul_adq0_rptr_invalid,ul_adq0_rptr_invalid,HI_IPF_CH0_ADQ0_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ0_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq0_stat_ul_adq0_wptr_invalid,ul_adq0_wptr_invalid,HI_IPF_CH0_ADQ0_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ0_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq0_stat_reserved_0,reserved_0,HI_IPF_CH0_ADQ0_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ0_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq0_wptr_ul_adq0_wptr,ul_adq0_wptr,HI_IPF_CH0_ADQ0_WPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ0_WPTR_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq0_wptr_reserved,reserved,HI_IPF_CH0_ADQ0_WPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ0_WPTR_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq0_rptr_ul_adq0_rptr,ul_adq0_rptr,HI_IPF_CH0_ADQ0_RPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ0_RPTR_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq0_rptr_reserved,reserved,HI_IPF_CH0_ADQ0_RPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ0_RPTR_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq1_base_ul_adq1_base,ul_adq1_base,HI_IPF_CH0_ADQ1_BASE_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ1_BASE_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq1_stat_ul_adq1_empty,ul_adq1_empty,HI_IPF_CH0_ADQ1_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ1_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq1_stat_reserved_1,reserved_1,HI_IPF_CH0_ADQ1_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ1_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq1_stat_ul_adq1_buf_epty,ul_adq1_buf_epty,HI_IPF_CH0_ADQ1_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ1_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq1_stat_ul_adq1_buf_full,ul_adq1_buf_full,HI_IPF_CH0_ADQ1_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ1_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq1_stat_ul_adq1_rptr_invalid,ul_adq1_rptr_invalid,HI_IPF_CH0_ADQ1_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ1_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq1_stat_ul_adq1_wptr_invalid,ul_adq1_wptr_invalid,HI_IPF_CH0_ADQ1_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ1_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq1_stat_reserved_0,reserved_0,HI_IPF_CH0_ADQ1_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ1_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq1_wptr_ul_adq1_wptr,ul_adq1_wptr,HI_IPF_CH0_ADQ1_WPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ1_WPTR_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq1_wptr_reserved,reserved,HI_IPF_CH0_ADQ1_WPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ1_WPTR_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq1_rptr_ul_adq1_rptr,ul_adq1_rptr,HI_IPF_CH0_ADQ1_RPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ1_RPTR_OFFSET)
HI_SET_GET(hi_ipf_ch0_adq1_rptr_reserved,reserved,HI_IPF_CH0_ADQ1_RPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH0_ADQ1_RPTR_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq_ctrl_dl_adq_en,dl_adq_en,HI_IPF_CH1_ADQ_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq_ctrl_dl_adq0_size_sel,dl_adq0_size_sel,HI_IPF_CH1_ADQ_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq_ctrl_dl_adq1_size_sel,dl_adq1_size_sel,HI_IPF_CH1_ADQ_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq_ctrl_reserved,reserved,HI_IPF_CH1_ADQ_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq_ctrl_dl_adq_plen_th,dl_adq_plen_th,HI_IPF_CH1_ADQ_CTRL_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ_CTRL_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq0_base_dl_adq0_base,dl_adq0_base,HI_IPF_CH1_ADQ0_BASE_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ0_BASE_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq0_stat_dl_adq0_empty,dl_adq0_empty,HI_IPF_CH1_ADQ0_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ0_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq0_stat_reserved_1,reserved_1,HI_IPF_CH1_ADQ0_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ0_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq0_stat_dl_adq0_buf_epty,dl_adq0_buf_epty,HI_IPF_CH1_ADQ0_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ0_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq0_stat_dl_adq0_buf_full,dl_adq0_buf_full,HI_IPF_CH1_ADQ0_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ0_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq0_stat_dl_adq0_rptr_invalid,dl_adq0_rptr_invalid,HI_IPF_CH1_ADQ0_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ0_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq0_stat_dl_adq0_wptr_invalid,dl_adq0_wptr_invalid,HI_IPF_CH1_ADQ0_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ0_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq0_stat_reserved_0,reserved_0,HI_IPF_CH1_ADQ0_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ0_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq0_wptr_dl_adq0_wptr,dl_adq0_wptr,HI_IPF_CH1_ADQ0_WPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ0_WPTR_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq0_wptr_reserved,reserved,HI_IPF_CH1_ADQ0_WPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ0_WPTR_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq0_rptr_dl_adq0_rptr,dl_adq0_rptr,HI_IPF_CH1_ADQ0_RPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ0_RPTR_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq0_rptr_reserved,reserved,HI_IPF_CH1_ADQ0_RPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ0_RPTR_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq1_base_dl_adq1_base,dl_adq1_base,HI_IPF_CH1_ADQ1_BASE_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ1_BASE_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq1_stat_dl_adq1_empty,dl_adq1_empty,HI_IPF_CH1_ADQ1_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ1_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq1_stat_reserved_1,reserved_1,HI_IPF_CH1_ADQ1_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ1_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq1_stat_dl_adq1_buf_epty,dl_adq1_buf_epty,HI_IPF_CH1_ADQ1_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ1_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq1_stat_dl_adq1_buf_full,dl_adq1_buf_full,HI_IPF_CH1_ADQ1_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ1_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq1_stat_dl_adq1_rptr_invalid,dl_adq1_rptr_invalid,HI_IPF_CH1_ADQ1_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ1_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq1_stat_dl_adq1_wptr_invalid,dl_adq1_wptr_invalid,HI_IPF_CH1_ADQ1_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ1_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq1_stat_reserved_0,reserved_0,HI_IPF_CH1_ADQ1_STAT_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ1_STAT_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq1_wptr_dl_adq1_wptr,dl_adq1_wptr,HI_IPF_CH1_ADQ1_WPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ1_WPTR_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq1_wptr_reserved,reserved,HI_IPF_CH1_ADQ1_WPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ1_WPTR_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq1_rptr_dl_adq1_rptr,dl_adq1_rptr,HI_IPF_CH1_ADQ1_RPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ1_RPTR_OFFSET)
HI_SET_GET(hi_ipf_ch1_adq1_rptr_reserved,reserved,HI_IPF_CH1_ADQ1_RPTR_T,HI_IPF_BASE_ADDR, HI_IPF_CH1_ADQ1_RPTR_OFFSET)
#endif
#endif // __HI_IPF_H__

