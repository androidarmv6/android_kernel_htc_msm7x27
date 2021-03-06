#define PHY_ID_BCM50610			0x0143bd60
#define PHY_ID_BCM50610M		0x0143bd70
#define PHY_ID_BCMAC131			0x0143bc70
#define PHY_ID_BCM57780			0x03625d90

#define PHY_BCM_OUI_MASK		0xfffffc00
#define PHY_BCM_OUI_1			0x00206000
#define PHY_BCM_OUI_2			0x0143bc00
#define PHY_BCM_OUI_3			0x03625c00


#define PHY_BCM_FLAGS_MODE_COPPER	0x00000001
#define PHY_BCM_FLAGS_MODE_1000BX	0x00000002
#define PHY_BCM_FLAGS_INTF_SGMII	0x00000010
#define PHY_BCM_FLAGS_INTF_XAUI		0x00000020
#define PHY_BRCM_WIRESPEED_ENABLE	0x00000100
#define PHY_BRCM_AUTO_PWRDWN_ENABLE	0x00000200
#define PHY_BRCM_RX_REFCLK_UNUSED	0x00000400
#define PHY_BRCM_STD_IBND_DISABLE	0x00000800
#define PHY_BRCM_EXT_IBND_RX_ENABLE	0x00001000
#define PHY_BRCM_EXT_IBND_TX_ENABLE	0x00002000
#define PHY_BRCM_CLEAR_RGMII_MODE	0x00004000
#define PHY_BRCM_DIS_TXCRXC_NOENRGY	0x00008000
#define PHY_BCM_FLAGS_VALID		0x80000000
