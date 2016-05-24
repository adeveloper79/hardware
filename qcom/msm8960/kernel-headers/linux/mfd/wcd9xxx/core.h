/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __MFD_TABLA_CORE_H__
#define __MFD_TABLA_CORE_H__
#include <linux/interrupt.h>
#include <linux/pm_qos.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_NUM_IRQ_REGS 3
#define WCD9XXX_SLIM_NUM_PORT_REG 3
#define WCD9XXX_INTERFACE_TYPE_SLIMBUS 0x00
#define WCD9XXX_INTERFACE_TYPE_I2C 0x01
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TABLA_VERSION_1_0 0
#define TABLA_VERSION_1_1 1
#define TABLA_VERSION_2_0 2
#define TABLA_IS_1_X(ver)   (((ver == TABLA_VERSION_1_0) || (ver == TABLA_VERSION_1_1)) ? 1 : 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TABLA_IS_2_0(ver) ((ver == TABLA_VERSION_2_0) ? 1 : 0)
#define SITAR_VERSION_1P0 0
#define SITAR_VERSION_1P1 1
#define SITAR_IS_1P0(ver)   ((ver == SITAR_VERSION_1P0) ? 1 : 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SITAR_IS_1P1(ver)   ((ver == SITAR_VERSION_1P1) ? 1 : 0)
enum {
 TABLA_IRQ_SLIMBUS = 0,
 TABLA_IRQ_MBHC_REMOVAL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TABLA_IRQ_MBHC_SHORT_TERM,
 TABLA_IRQ_MBHC_PRESS,
 TABLA_IRQ_MBHC_RELEASE,
 TABLA_IRQ_MBHC_POTENTIAL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TABLA_IRQ_MBHC_INSERTION,
 TABLA_IRQ_BG_PRECHARGE,
 TABLA_IRQ_PA1_STARTUP,
 TABLA_IRQ_PA2_STARTUP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TABLA_IRQ_PA3_STARTUP,
 TABLA_IRQ_PA4_STARTUP,
 TABLA_IRQ_PA5_STARTUP,
 TABLA_IRQ_MICBIAS1_PRECHARGE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TABLA_IRQ_MICBIAS2_PRECHARGE,
 TABLA_IRQ_MICBIAS3_PRECHARGE,
 TABLA_IRQ_HPH_PA_OCPL_FAULT,
 TABLA_IRQ_HPH_PA_OCPR_FAULT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TABLA_IRQ_EAR_PA_OCPL_FAULT,
 TABLA_IRQ_HPH_L_PA_STARTUP,
 TABLA_IRQ_HPH_R_PA_STARTUP,
 TABLA_IRQ_EAR_PA_STARTUP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TABLA_NUM_IRQS,
};
enum {
 SITAR_IRQ_SLIMBUS = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SITAR_IRQ_MBHC_REMOVAL,
 SITAR_IRQ_MBHC_SHORT_TERM,
 SITAR_IRQ_MBHC_PRESS,
 SITAR_IRQ_MBHC_RELEASE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SITAR_IRQ_MBHC_POTENTIAL,
 SITAR_IRQ_MBHC_INSERTION,
 SITAR_IRQ_BG_PRECHARGE,
 SITAR_IRQ_PA1_STARTUP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SITAR_IRQ_PA2_STARTUP,
 SITAR_IRQ_PA3_STARTUP,
 SITAR_IRQ_PA4_STARTUP,
 SITAR_IRQ_PA5_STARTUP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SITAR_IRQ_MICBIAS1_PRECHARGE,
 SITAR_IRQ_MICBIAS2_PRECHARGE,
 SITAR_IRQ_MICBIAS3_PRECHARGE,
 SITAR_IRQ_HPH_PA_OCPL_FAULT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SITAR_IRQ_HPH_PA_OCPR_FAULT,
 SITAR_IRQ_EAR_PA_OCPL_FAULT,
 SITAR_IRQ_HPH_L_PA_STARTUP,
 SITAR_IRQ_HPH_R_PA_STARTUP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SITAR_IRQ_EAR_PA_STARTUP,
 SITAR_NUM_IRQS,
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TAIKO_IRQ_SLIMBUS = 0,
 TAIKO_IRQ_MBHC_REMOVAL,
 TAIKO_IRQ_MBHC_SHORT_TERM,
 TAIKO_IRQ_MBHC_PRESS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TAIKO_IRQ_MBHC_RELEASE,
 TAIKO_IRQ_MBHC_POTENTIAL,
 TAIKO_IRQ_MBHC_INSERTION,
 TAIKO_IRQ_BG_PRECHARGE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TAIKO_IRQ_PA1_STARTUP,
 TAIKO_IRQ_PA2_STARTUP,
 TAIKO_IRQ_PA3_STARTUP,
 TAIKO_IRQ_PA4_STARTUP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TAIKO_IRQ_PA5_STARTUP,
 TAIKO_IRQ_MICBIAS1_PRECHARGE,
 TAIKO_IRQ_MICBIAS2_PRECHARGE,
 TAIKO_IRQ_MICBIAS3_PRECHARGE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TAIKO_IRQ_HPH_PA_OCPL_FAULT,
 TAIKO_IRQ_HPH_PA_OCPR_FAULT,
 TAIKO_IRQ_EAR_PA_OCPL_FAULT,
 TAIKO_IRQ_HPH_L_PA_STARTUP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TAIKO_IRQ_HPH_R_PA_STARTUP,
 TAIKO_IRQ_EAR_PA_STARTUP,
 TAIKO_NUM_IRQS,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum wcd9xxx_pm_state {
 WCD9XXX_PM_SLEEPABLE,
 WCD9XXX_PM_AWAKE,
 WCD9XXX_PM_ASLEEP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct wcd9xxx {
 struct device *dev;
 struct slim_device *slim;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct slim_device *slim_slave;
 struct mutex io_lock;
 struct mutex xfer_lock;
 struct mutex irq_lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 version;
 unsigned int irq_base;
 unsigned int irq;
 u8 irq_masks_cur[WCD9XXX_NUM_IRQ_REGS];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 irq_masks_cache[WCD9XXX_NUM_IRQ_REGS];
 u8 irq_level[WCD9XXX_NUM_IRQ_REGS];
 int reset_gpio;
 int (*read_dev)(struct wcd9xxx *wcd9xxx, unsigned short reg,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int bytes, void *dest, bool interface_reg);
 int (*write_dev)(struct wcd9xxx *wcd9xxx, unsigned short reg,
 int bytes, void *src, bool interface_reg);
 u32 num_of_supplies;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct regulator_bulk_data *supplies;
 enum wcd9xxx_pm_state pm_state;
 struct mutex pm_lock;
 wait_queue_head_t pm_wq;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct pm_qos_request pm_qos_req;
 int wlock_holders;
 int num_rx_port;
 int num_tx_port;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 idbyte[4];
};
enum wcd9xxx_pm_state wcd9xxx_pm_cmpxchg(struct wcd9xxx *wcd9xxx,
 enum wcd9xxx_pm_state o,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum wcd9xxx_pm_state n);
#endif
