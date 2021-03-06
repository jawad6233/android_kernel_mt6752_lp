#include <mach/mt_reg_base.h>

#define ACCDET_BASE              0x00000000
#define ACCDET_BASE_OFFSET       0x0EC0		
#define ACCDET_END_OFFSET        0x0EF0		

#define TOP_RST_ACCDET		     ACCDET_BASE + 0x0282
#define TOP_RST_ACCDET_SET 		 ACCDET_BASE + 0x0284
#define TOP_RST_ACCDET_CLR 		 ACCDET_BASE + 0x0286

#define INT_CON_ACCDET           ACCDET_BASE + 0x0296
#define INT_CON_ACCDET_SET		 ACCDET_BASE + 0x0298
#define INT_CON_ACCDET_CLR       ACCDET_BASE + 0x029A

#define INT_STATUS_ACCDET        ACCDET_BASE + 0x02AE

#define TOP_CKPDN           	 ACCDET_BASE + 0x0244
#define TOP_CKPDN_SET            ACCDET_BASE + 0x0246
#define TOP_CKPDN_CLR            ACCDET_BASE + 0x0248


#define ACCDET_RSV               ACCDET_BASE + 0x0EC0
#define ACCDET_CTRL              ACCDET_BASE + 0x0EC2
#define ACCDET_STATE_SWCTRL      ACCDET_BASE + 0x0EC4
#define ACCDET_PWM_WIDTH         ACCDET_BASE + 0x0EC6
#define ACCDET_PWM_THRESH        ACCDET_BASE + 0x0EC8
#define ACCDET_EN_DELAY_NUM      ACCDET_BASE + 0x0ECA
#define ACCDET_DEBOUNCE0         ACCDET_BASE + 0x0ECC
#define ACCDET_DEBOUNCE1         ACCDET_BASE + 0x0ECE
#define ACCDET_DEBOUNCE2         ACCDET_BASE + 0x0ED0
#define ACCDET_DEBOUNCE3         ACCDET_BASE + 0x0ED2
#define ACCDET_DEBOUNCE4         ACCDET_BASE + 0x0ED4
#define ACCDET_DEFAULT_STATE_RG  ACCDET_BASE + 0x0ED6
#define ACCDET_IRQ_STS           ACCDET_BASE + 0x0ED8
#define ACCDET_CONTROL_RG        ACCDET_BASE + 0x0EDA
#define ACCDET_STATE_RG          ACCDET_BASE + 0x0EDC
#define ACCDET_EINT_CTL			 ACCDET_BASE + 0x0EDE
#define ACCDET_EINT_PWM_DELAY	 ACCDET_BASE + 0x0EE0
#define ACCDET_TEST_DEBUG	     ACCDET_BASE + 0x0EE2
#define ACCDET_EINT_NV           ACCDET_BASE + 0x0EE4
#define ACCDET_NEGV              ACCDET_BASE + 0x0EE8
#define ACCDET_CUR_DEB			 ACCDET_BASE + 0x0EEA
#define ACCDET_EINT_CUR_DEB		 ACCDET_BASE + 0x0EEC
#define ACCDET_RSV_CON0			 ACCDET_BASE + 0x0EEE
#define ACCDET_RSV_CON1			 ACCDET_BASE + 0x0EF0

#define ACCDET_AUXADC_CTL_SET	 ACCDET_BASE + 0x0EB4 
#define ACCDET_AUXADC_REG	     ACCDET_BASE + 0x0E54
#define ACCDET_AUXADC_AUTO_SPL   ACCDET_BASE + 0x0E24

#define ACCDET_ADC_REG 			 ACCDET_BASE + 0x0D02 


#define ACCDET_AUXADC_AUTO_SET   (1<<9)
#define ACCDET_DATA_READY        (1<<15)
#define ACCDET_CH_REQ_EN         (1<<8)  
#define ACCDET_DATA_MASK         (0x7FFF)

#define ACCDET_POWER_MOD         (1<<13)
#define ACCDET_MIC1_ON           (1<<7)
#define ACCDET_BF_ON           	 (1<<10)
#define ACCDET_BF_OFF            (0<<10)
#define ACCDET_BF_MOD            (1<<11)
#define ACCDET_INPUT_MICP        (1<<3)
#define ACCDET_EINT_CON_EN       (1<<14)
#define ACCDET_NEGV_DT_EN        (1<<13)

#define ACCDET_CTRL_EN           (1<<0)
#define ACCDET_EINT_EN           (1<<2) 
#define ACCDET_NEGV_EN           (1<<4) 
#define ACCDET_EINT_PWM_IDLE     (1<<7)
#define ACCDET_MIC_PWM_IDLE      (1<<6)
#define ACCDET_VTH_PWM_IDLE      (1<<5)
#define ACCDET_CMP_PWM_IDLE      (1<<4)
#define ACCDET_EINT_PWM_EN       (1<<3)
#define ACCDET_CMP_EN            (1<<0)
#define ACCDET_VTH_EN            (1<<1)
#define ACCDET_MICBIA_EN         (1<<2)


#define ACCDET_ENABLE			 (1<<0)
#define ACCDET_DISABLE			 (0<<0)

#define ACCDET_RESET_SET          (1<<4) 
#define ACCDET_RESET_CLR          (1<<4) 

#define IRQ_CLR_BIT              0x100
#define IRQ_EINT_CLR_BIT         0x400
#define IRQ_NEGV_CLR_BIT         0x200
#define IRQ_STATUS_BIT           (1<<0)
#define EINT_IRQ_STATUS_BIT      (1<<2)
#define NEGV_IRQ_STATUS_BIT      (1<<1)
#define EINT_IRQ_DE_OUT          0x40
#define EINT_IRQ_DE_IN           0x60
#define EINT_IRQ_POL_HIGH        (1<<15)
#define EINT_IRQ_POL_LOW         (1<<15)


#define RG_ACCDET_IRQ_SET        (1<<12) 
#define RG_ACCDET_IRQ_CLR        (1<<12) 
#define RG_ACCDET_IRQ_STATUS_CLR (1<<12) 

#define RG_ACCDET_EINT_IRQ_SET        (1<<13) 
#define RG_ACCDET_EINT_IRQ_CLR        (1<<13) 

#define RG_ACCDET_NEGV_IRQ_SET        (1<<14) 
#define RG_ACCDET_NEGV_IRQ_CLR        (1<<14) 
#define RG_ACCDET_NEGV_IRQ_STATUS_CLR (1<<14) 

#define RG_ACCDET_CLK_SET        (1<<9) 
#define RG_ACCDET_CLK_CLR        (1<<9) 



#define ACCDET_SWCTRL_EN         0x07


#define ACCDET_DE4               0x42 
#define ACCDET_SWCTRL_IDLE_EN    (0x07<<4)
