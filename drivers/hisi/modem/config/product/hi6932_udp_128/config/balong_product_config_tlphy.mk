# MD5: e18af087723c6faa63d042c68237faec
CFG_XTENSA_CORE				:=v7r22_bbe16
CFG_XTENSA_SYSTEM			:=$(ROOT_XTENSA_PATH_W)/XtDevTools/install/builds/RD-2012.5-linux/$(CFG_XTENSA_CORE)/config
CFG_TENSILICA_BUILDS	    :=$(ROOT_XTENSA_PATH_W)/XtDevTools/install/builds/RD-2012.5-linux
CFG_TENSILICA_TOOLS	        :=$(ROOT_XTENSA_PATH_W)/XtDevTools/install/tools/RD-2012.5-linux
CFG_TENSILICA_BUILDS_HIFI   :=$(ROOT_XTENSA_PATH_W)/XtDevTools/install/builds/RD-2012.5-linux
CFG_TENSILICA_TOOLS_HIFI    :=$(ROOT_XTENSA_PATH_W)/XtDevTools/install/tools/RD-2012.5-linux
LPHY_LD_MAP_PUB_PATH        :=modem/phy/lt/Tensilica_LSP/BBE16_V722_LSP/pub_lsp
LPHY_LD_MAP_LTE_PATH        :=modem/phy/lt/Tensilica_LSP/BBE16_V722_LSP/lte_lsp
LPHY_LD_MAP_TDS_PATH        :=modem/phy/lt/Tensilica_LSP/BBE16_V722_LSP/tds_lsp
LPHY_LD_SDR_LIB_FILE        :=BBE16_V722_O2
LPHY_XTENSA_RULES           :=cc_tensilica5.0.5_rules.mk
CFG_LPHY_PUB_DTCM_BASE	    :=0x72740000
CFG_LPHY_PUB_ITCM_BASE	    :=0x72840000
CFG_LPHY_PRV_DTCM_BASE	    :=0x72798000
CFG_LPHY_PRV_ITCM_BASE	    :=0x72898000
CFG_LPHY_PUB_DTCM_SIZE		:=0x58000
CFG_LPHY_PUB_ITCM_SIZE		:=0x58000
CFG_LPHY_PRV_DTCM_SIZE		:=0x58000
CFG_LPHY_PRV_ITCM_SIZE		:=0x58000
CFG_LPHY_LTE_DTCM_SIZE		:=0x58000
CFG_LPHY_LTE_ITCM_SIZE		:=0x58000
CFG_LPHY_TDS_DTCM_SIZE		:=0x30000
CFG_LPHY_TDS_ITCM_SIZE		:=0x38000
CFG_LPHY_TOTAL_IMG_SIZE                :=((LPHY_PUB_DTCM_SIZE)+(LPHY_PUB_ITCM_SIZE)+(LPHY_LTE_DTCM_SIZE)*2+(LPHY_LTE_ITCM_SIZE)*2+(LPHY_TDS_DTCM_SIZE)+(LPHY_TDS_ITCM_SIZE))
CFG_TL_PHY_ASIC_V722        	:= YES
CFG_LPHY_SFT                := NO
CFG_TL_PHY_BBE16_CACHE          := NO
CFG_TL_PHY_HI6932         	:= YES
CFG_TL_PHY_FEATURE_LTE_LCS  	:= YES
CFG_FEATURE_TAS                         := FEATURE_OFF
CFG_FEATURE_DSDS                        := FEATURE_OFF
CFG_FEATURE_TLPHY_SINGLE_XO		:= YES
CFG_FEATURE_LPHY_RFIC_HI6362    := FEATURE_ON
CFG_FEATURE_TLPHY_LOWER_SAR     := FEATURE_ON
