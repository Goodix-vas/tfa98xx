/* 
 * Copyright 2025 GOODIX 
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */
/** Filename: tfd1015_tfdfieldnames.h
 *  This file was generated automatically on 07/21/25 at 17:52:46. 
 *  Source file: TFD1015_SORA1_N1A0_I2C_RegisterMap.xlsx
 */

#ifndef _TFD1015_TFDFIELDNAMES_H
#define _TFD1015_TFDFIELDNAMES_H


#define TFD1015_I2CVERSION    21

typedef enum tfd1015BfEnumList {
    TFD1015_BF_PWDN  = 0x0000,    /*!< Powerdown selection                                */
    TFD1015_BF_I2CR  = 0x0010,    /*!< I2C reset - auto clear                             */
    TFD1015_BF_AMPE  = 0x0030,    /*!< Activate amplifier                                 */
    TFD1015_BF_EAMPHZEN= 0x0050,    /*!< Amplifer outputs state when OFF                    */
    TFD1015_BF_INTP  = 0x0071,    /*!< Interrupt pin configuration                        */
    TFD1015_BF_QALARM= 0x0090,    /*!< Device response to Qpump OK flag                   */
    TFD1015_BF_BYPUVP= 0x00a0,    /*!< Bypass VBAT UVP                                    */
    TFD1015_BF_BYPOCP= 0x00b0,    /*!< Bypass OCP                                         */
    TFD1015_BF_QPUMPOKEN= 0x00c0,    /*!< Low drive   response to Qpump OK flag              */
    TFD1015_BF_AMPQOKEN= 0x00d0,    /*!< Low power response to Qpump OK flag                */
    TFD1015_BF_ENPLLSYNC= 0x00e0,    /*!< Manager control for enabling synchronisation with PLL FS */
    TFD1015_BF_COORHYS= 0x00f0,    /*!< Select hysteresis for clock range detector         */
    TFD1015_BF_MANSCONF= 0x0120,    /*!< I2C configured                                     */
    TFD1015_BF_BYPUVPP= 0x0130,    /*!< Bypass VDDP UVP                                    */
    TFD1015_BF_BYPOVPP= 0x0140,    /*!< Bypass VDDP OVP                                    */
    TFD1015_BF_BYPUVPIO= 0x0150,    /*!< Bypass VDDIO UVP                                   */
    TFD1015_BF_MUTETO= 0x0160,    /*!< Time out mute sequence                             */
    TFD1015_BF_MANROBOD= 0x0170,    /*!< Device response to BOD                             */
    TFD1015_BF_MANEDCTH= 0x01d0,    /*!< Device response to too high DC level flag (DCTH is 1) */
    TFD1015_BF_CSVSENLP= 0x01f0,    /*!< CSVS in Low power mode                             */
    TFD1015_BF_AUDFS = 0x0203,    /*!< Sample rate (Fs)                                   */
    TFD1015_BF_FRACTDEL= 0x0256,    /*!< V/I Fractional delay                               */
    TFD1015_BF_REV   = 0x030f,    /*!< Product                                            */
    TFD1015_BF_REFCKEXT= 0x0401,    /*!< PLL external ref clock                             */
    TFD1015_BF_BYTDMGLF= 0x0420,    /*!< Bypass TDM FS/BCK/DATAI giltch filter              */
    TFD1015_BF_MANAOOSC= 0x0460,    /*!< Internal oscillator control during power down mode */
    TFD1015_BF_FSSYNCEN= 0x0480,    /*!< Enable FS synchronisation for clock divider        */
    TFD1015_BF_CLKREFSYNCEN= 0x0490,    /*!< Enable PLL reference clock synchronisation for clock divider */
    TFD1015_BF_PWMFREQ= 0x04a0,    /*!< PWM output frequency select                        */
    TFD1015_BF_CGUSYNCDCG= 0x0500,    /*!< Clock gating control for CGU synchronisation module */
    TFD1015_BF_IPMBYP= 0x0510,    /*!< Bypass ipm synchromizser in DPSA block             */
    TFD1015_BF_DEVCAT= 0x0607,    /*!< Product category                                   */
    TFD1015_BF_DEVREV= 0x0687,    /*!< Version                                            */
    TFD1015_BF_VDDS  = 0x1000,    /*!< POR (sticky flag, clear on write a '1')            */
    TFD1015_BF_OTDS  = 0x1010,    /*!< OTP alarm (sticky flag,  clear on write a '1')     */
    TFD1015_BF_UVDS  = 0x1020,    /*!< UVP alarm (sticky flag,  clear on write a '1')     */
    TFD1015_BF_OVDS  = 0x1030,    /*!< VBAT OVP alarm (sticky flag,  clear on write a '1') */
    TFD1015_BF_OCDS  = 0x1040,    /*!< OCP amplifier (sticky flag,  clear on write a '1') */
    TFD1015_BF_NOCLK = 0x1050,    /*!< Lost clock (sticky flag,  clear on write a '1')    */
    TFD1015_BF_CLKOOR= 0x1060,    /*!< External clock status (sticky flag,  clear on write a '1') */
    TFD1015_BF_OCPOMHN= 0x1070,    /*!< OCPOK Minion nmos  (sticky flag,  clear on write a '1') */
    TFD1015_BF_OCPOMHP= 0x1080,    /*!< OCPOK Minion pmos (sticky flag,  clear on write a '1') */
    TFD1015_BF_OCPOMLN= 0x1090,    /*!< OCPOK Minion nmos  (sticky flag,  clear on write a '1') */
    TFD1015_BF_OCPOMLP= 0x10a0,    /*!< OCPOK Minion pmos (sticky flag,  clear on write a '1') */
    TFD1015_BF_OCPOAP= 0x10b0,    /*!< OCPOK High side OUTP (sticky flag,  clear on write a '1') */
    TFD1015_BF_OCPOAN= 0x10c0,    /*!< OCPOK  High side OUTN (sticky flag,  clear on write a '1') */
    TFD1015_BF_OCPOBP= 0x10d0,    /*!< OCPOK  Low side OUTP (sticky flag,  clear on write a '1') */
    TFD1015_BF_OCPOBN= 0x10e0,    /*!< OCPOK Low side OUTN (sticky flag,  clear on write a '1')  */
    TFD1015_BF_DCTH  = 0x10f0,    /*!< DC level on voltage sense too high (sticky flag,  clear on write a '1') */
    TFD1015_BF_CLKS  = 0x1100,    /*!< Clocks stable                                      */
    TFD1015_BF_OTPB  = 0x1110,    /*!< EFUSE busy                                         */
    TFD1015_BF_TDMERR= 0x1120,    /*!< TDM error                                          */
    TFD1015_BF_LPMS  = 0x1130,    /*!< Flag in low power mode                             */
    TFD1015_BF_LNMS  = 0x1140,    /*!< Flag in low noise mode                             */
    TFD1015_BF_PLLS  = 0x1170,    /*!< PLL lock                                           */
    TFD1015_BF_TDMLUTER= 0x1180,    /*!< TDM LUT error                                      */
    TFD1015_BF_SWS   = 0x1190,    /*!< Amplifier engage                                   */
    TFD1015_BF_AMPS  = 0x11a0,    /*!< Amplifier enable                                   */
    TFD1015_BF_AREFS = 0x11b0,    /*!< References enable                                  */
    TFD1015_BF_CLIPS = 0x11c0,    /*!< Amplifier clipping                                 */
    TFD1015_BF_VGBS  = 0x11e0,    /*!< Vddp greater than vbat                             */
    TFD1015_BF_FLGBSS= 0x11f0,    /*!< BSS flag                                           */
    TFD1015_BF_MANSTATE= 0x1203,    /*!< Device manager status                              */
    TFD1015_BF_AMPSTE= 0x1243,    /*!< Amplifier control status                           */
    TFD1015_BF_TDMSTAT= 0x1282,    /*!< TDM status bits                                    */
    TFD1015_BF_QPCLKSTS= 0x12b1,    /*!< QPUMP clock status                                 */
    TFD1015_BF_WAITSYNC= 0x12d0,    /*!< CGU and PLL synchronisation status flag from CGU   */
    TFD1015_BF_LDMS  = 0x12e0,    /*!< Flag in Low drive mode                             */
    TFD1015_BF_BODNOK= 0x1300,    /*!< BOD Flag VDD NOT OK (sticky flag,  clear on write a '1') */
    TFD1015_BF_QPFAIL= 0x1310,    /*!< QPUMP Fail Flag (sticky flag,  clear on write a '1') */
    TFD1015_BF_VDDPUVDS= 0x1330,    /*!< VDDP UVP alarm (sticky flag,  clear on write a '1') */
    TFD1015_BF_VDDPOVDS= 0x1340,    /*!< VDDP OVP alarm (sticky flag,  clear on write a '1') */
    TFD1015_BF_VVDIOUVDS= 0x1350,    /*!< VDDIO UVP alarm (sticky flag,  clear on write a '1') */
    TFD1015_BF_BATS  = 0x1509,    /*!< Battery voltage monitoring (V)                     */
    TFD1015_BF_TEMPS = 0x1608,    /*!< IC Temperature monitoring (C)                      */
    TFD1015_BF_VDDPS = 0x1709,    /*!< Amplifier supply / booster voltage monitoring (V)  */
    TFD1015_BF_TDME  = 0x2000,    /*!< Enable interface                                   */
    TFD1015_BF_AMPINSEL= 0x2011,    /*!< Amplifier input selection                          */
    TFD1015_BF_INPLEV= 0x2030,    /*!< TDM output attenuation                             */
    TFD1015_BF_TDMCLINV= 0x2040,    /*!< Reception data to BCK clock                        */
    TFD1015_BF_TDMFSPOL= 0x2050,    /*!< FS polarity                                        */
    TFD1015_BF_TDMSLOTS= 0x2061,    /*!< N-slots in Frame                                   */
    TFD1015_BF_TDMSLLN= 0x2081,    /*!< N-bits in slot                                     */
    TFD1015_BF_TDMSSIZE= 0x20a1,    /*!< Sample size per slot                               */
    TFD1015_BF_TDMNBCK= 0x20c3,    /*!< N-BCK's in FS                                      */
    TFD1015_BF_TDMDEL= 0x2100,    /*!< Data delay to FS                                   */
    TFD1015_BF_TDMADJ= 0x2110,    /*!< Data adjustment                                    */
    TFD1015_BF_TDMSPKE= 0x2120,    /*!< Control audio TDM input channel 0                  */
    TFD1015_BF_TDMDCE= 0x2130,    /*!< Control audio TDM input channel 1                  */
    TFD1015_BF_TDMSRC0E= 0x2140,    /*!< Control TDM source0 data channel                   */
    TFD1015_BF_TDMSRC1E= 0x2150,    /*!< Control TDM source1 data channel                   */
    TFD1015_BF_TDMSRC2E= 0x2160,    /*!< Control TDM source2 data channel                   */
    TFD1015_BF_TDMSPKS= 0x2183,    /*!< TDM slot for input channel 0                       */
    TFD1015_BF_TDMDCS= 0x21c3,    /*!< TDM slot for input channel 1                       */
    TFD1015_BF_TDMSRC0S= 0x2203,    /*!< Slot Position of TDM source0 channel data          */
    TFD1015_BF_TDMSRC1S= 0x2243,    /*!< Slot Position of TDM source1 channel data          */
    TFD1015_BF_TDMSRC2S= 0x2283,    /*!< Slot Position of TDM source2 channel data          */
    TFD1015_BF_ISTVDDS= 0x4000,    /*!< Interrupt status POR                               */
    TFD1015_BF_ISTUVDS= 0x4010,    /*!< Interrupt status VDDIO  UVP alarm                  */
    TFD1015_BF_ISTOTDS= 0x4020,    /*!< Interrupt status OTP alarm                         */
    TFD1015_BF_ISTOCPR= 0x4030,    /*!< Interrupt status OCP alarm                         */
    TFD1015_BF_ISTUVVDDIO= 0x4040,    /*!< Interrupt status VBAT UVP alarm                    */
    TFD1015_BF_ISTTDMER= 0x4050,    /*!< Interrupt status TDM error                         */
    TFD1015_BF_ISTNOCLK= 0x4060,    /*!< Interrupt status lost clock                        */
    TFD1015_BF_ISTDCTH= 0x4070,    /*!< Interrupt status dc too high                       */
    TFD1015_BF_ISTBODNOK= 0x4080,    /*!< Interrupt status brown out detected                */
    TFD1015_BF_ISTCOOR= 0x4090,    /*!< Interrupt status clock out of range                */
    TFD1015_BF_ISTOVDS= 0x40a0,    /*!< Interrupt status VBAT OVP alarm                    */
    TFD1015_BF_ISTQPFAIL= 0x40b0,    /*!< Interrupt status qpump failure                     */
    TFD1015_BF_ISTUVVDDP= 0x40c0,    /*!< Interrupt status VDDP UVP alarm                    */
    TFD1015_BF_ISTOVVDDP= 0x40d0,    /*!< Interrupt status VDDP  OVP alarm                   */
    TFD1015_BF_ICLVDDS= 0x4400,    /*!< Clear interrupt status POR                         */
    TFD1015_BF_ICLUVVDDIO= 0x4410,    /*!< Clear interrupt status VDDIO UVP alarm             */
    TFD1015_BF_ICLOTDS= 0x4420,    /*!< Clear interrupt status OTP alarm                   */
    TFD1015_BF_ICLOCPR= 0x4430,    /*!< Clear interrupt status OCP alarm                   */
    TFD1015_BF_ICLUVDS= 0x4440,    /*!< Clear interrupt status VBAT UVP alarm              */
    TFD1015_BF_ICLTDMER= 0x4450,    /*!< Clear interrupt status TDM error                   */
    TFD1015_BF_ICLNOCLK= 0x4460,    /*!< Clear interrupt status lost clk                    */
    TFD1015_BF_ICLDCTH= 0x4470,    /*!< Clear interrupt status dc too high                 */
    TFD1015_BF_ICLBODNOK= 0x4480,    /*!< Clear interrupt status brown out detected          */
    TFD1015_BF_ICLCOOR= 0x4490,    /*!< Clear interrupt status clock out of range          */
    TFD1015_BF_ICLOVDS= 0x44a0,    /*!< Clear interrupt status VBAT OVP alarm              */
    TFD1015_BF_ICLQPFAIL= 0x44b0,    /*!< Clear interrupt status qpump failure               */
    TFD1015_BF_ICLUVVDDP= 0x44c0,    /*!< Clear interrupt status VDDP UVP alarm              */
    TFD1015_BF_ICLOVVDDP= 0x44d0,    /*!< Clear interrupt status VDDP OVP alarm              */
    TFD1015_BF_IEVDDS= 0x4800,    /*!< Enable interrupt POR                               */
    TFD1015_BF_IEUVVDDIO= 0x4810,    /*!< Enable interrupt VDDIO UVP alarm                   */
    TFD1015_BF_IEOTDS= 0x4820,    /*!< Enable interrupt OTP alarm                         */
    TFD1015_BF_IEOCPR= 0x4830,    /*!< Enable interrupt OCP alarm                         */
    TFD1015_BF_IEUVDS= 0x4840,    /*!< Enable interrupt VBAT UVP alarm                    */
    TFD1015_BF_IETDMER= 0x4850,    /*!< Enable interrupt TDM error                         */
    TFD1015_BF_IENOCLK= 0x4860,    /*!< Enable interrupt lost clk                          */
    TFD1015_BF_IEDCTH= 0x4870,    /*!< Enable interrupt dc too high                       */
    TFD1015_BF_IEBODNOK= 0x4880,    /*!< Enable interrupt brown out detect                  */
    TFD1015_BF_IECOOR= 0x4890,    /*!< Enable interrupt clock out of range                */
    TFD1015_BF_IEOVDS= 0x48a0,    /*!< Enable interrupt VBAT OVP alarm                    */
    TFD1015_BF_IEQPFAIL= 0x48b0,    /*!< Enable interrupt qpump failure                     */
    TFD1015_BF_IEUVVDDP= 0x48c0,    /*!< Enable interrupt VDDP UVP alarm                    */
    TFD1015_BF_IEOVVDDP= 0x48d0,    /*!< Enable interrupt VDDP OVP alarm                    */
    TFD1015_BF_IPOVDDS= 0x4c00,    /*!< Interrupt polarity POR                             */
    TFD1015_BF_IPOUVVDDIO= 0x4c10,    /*!< Interrupt polarity VDDIO UVP alarm                 */
    TFD1015_BF_IPOOTDS= 0x4c20,    /*!< Interrupt polarity OTP alarm                       */
    TFD1015_BF_IPOOCPR= 0x4c30,    /*!< Interrupt polarity OCP alarm                       */
    TFD1015_BF_IPOUVDS= 0x4c40,    /*!< Interrupt polarity VBAT UVP alarm                  */
    TFD1015_BF_IPOTDMER= 0x4c50,    /*!< Interrupt polarity TDM error                       */
    TFD1015_BF_IPONOCLK= 0x4c60,    /*!< Interrupt polarity lost clk                        */
    TFD1015_BF_IPODCTH= 0x4c70,    /*!< Interrupt polarity dc too high                     */
    TFD1015_BF_IPOBODNOK= 0x4c80,    /*!< Interrupt polarity brown out detect                */
    TFD1015_BF_IPOCOOR= 0x4c90,    /*!< Interrupt polarity clock out of range              */
    TFD1015_BF_IPOOVDS= 0x4ca0,    /*!< Interrupt polarity VBAT OVP alarm                  */
    TFD1015_BF_IPOQPFAIL= 0x4cb0,    /*!< Interrupt polarity qpump failure                   */
    TFD1015_BF_IPOUVVDDP= 0x4cc0,    /*!< Interrupt polarity VDDP UVP alarm                  */
    TFD1015_BF_IPOOVVDDP= 0x4cd0,    /*!< Interrupt polarity VDDP  OVP alarm                 */
    TFD1015_BF_BSSCLRST= 0x50d0,    /*!< Reset clipper  auto-clear                          */
    TFD1015_BF_BSSR  = 0x50e0,    /*!< Battery voltage read out in BATS bitfield          */
    TFD1015_BF_BSSBY = 0x50f0,    /*!< Bypass battery safeguard                           */
    TFD1015_BF_USOUND= 0x5130,    /*!< Ultrasound mode                                    */
    TFD1015_BF_DCDITH= 0x5140,    /*!< DC dithering selection                             */
    TFD1015_BF_HPFBYP= 0x5150,    /*!< Bypass HPF                                         */
    TFD1015_BF_PWMPH = 0x5203,    /*!< Select pwm phase wrt TDM_FS signal                 */
    TFD1015_BF_AMPGAIN= 0x5257,    /*!< Amplifier gain                                     */
    TFD1015_BF_BYPDLYLINE= 0x52f0,    /*!< Bypass the interpolator delay line                 */
    TFD1015_BF_AMPSLP= 0x5481,    /*!< Extreme amplifier slope control                    */
    TFD1015_BF_BSSMVBS= 0x5a00,    /*!< Min_vbat source select                             */
    TFD1015_BF_DCMCC = 0x5a13,    /*!< Battery current limiter initial value              */
    TFD1015_BF_BSST  = 0x5a53,    /*!< BSS threshold Vbat value (reducing gain)           */
    TFD1015_BF_BSSAR = 0x5a91,    /*!< BSS attack rate (reducing gain)                    */
    TFD1015_BF_BSSRR = 0x5ab3,    /*!< BSS release rate  (reducing gain)                  */
    TFD1015_BF_BSSMULT= 0x5af0,    /*!< Multiply attack rate by 8                          */
    TFD1015_BF_BSSHT = 0x5b03,    /*!< BSS hold time (reducing gain)                      */
    TFD1015_BF_BSSS  = 0x5b41,    /*!< BSS steepness (reducing gain)                      */
    TFD1015_BF_BSSRL = 0x5b62,    /*!< BSS allowed reduction level (reducing gain)        */
    TFD1015_BF_BSSDCT= 0x5b93,    /*!< BSS threshold Vbat value (reducing DCMCC)          */
    TFD1015_BF_BSSDCAR= 0x5bd1,    /*!< BSS attack rate  (reducing DCMCC)                  */
    TFD1015_BF_BSSDCRR= 0x5c03,    /*!< BSS release rate  (reducing DCMCC)                 */
    TFD1015_BF_BSSDCHT= 0x5c43,    /*!< BSS hold time (reducing DCMCC)                     */
    TFD1015_BF_BSSDCS= 0x5c81,    /*!< Battery supply safeguard steepness (reducing DCMCC) */
    TFD1015_BF_BSSDCRL= 0x5ca2,    /*!< BSS allowed reduction level (reducing DCMCC)       */
    TFD1015_BF_DCLIPFLS= 0x5cd1,    /*!< Select source for BSS flag                         */
    TFD1015_BF_TDMSPKG= 0x5f54,    /*!< TDM signal attenuation                             */
    TFD1015_BF_IPM   = 0x60e1,    /*!< Idle power mode control                            */
    TFD1015_BF_LDMSEG= 0x62b2,    /*!< Amplifier low drive   mode                         */
    TFD1015_BF_LDM   = 0x63c1,    /*!< Low drive mode detector control                    */
    TFD1015_BF_RCVM  = 0x63e1,    /*!< Handset/Receiver mode                              */
    TFD1015_BF_VBATHOLD= 0x6555,    /*!< Select hold time for VBAT(min/max)                 */
    TFD1015_BF_VBATMAX= 0x65b0,    /*!< Select between vbat minimum or maximum for Chip Sense output on TDM  VBAT(min/max) */
    TFD1015_BF_LPM   = 0x66e1,    /*!< Low power mode control                             */
    TFD1015_BF_LPMT  = 0x6705,    /*!< Low power mode  amplitude trigger level            */
    TFD1015_BF_LPMHLD= 0x6765,    /*!< Low power mode detector   ctrl hold time before low audio is reckoned to be low audio */
    TFD1015_BF_LPMTM = 0x67f0,    /*!< Low power threshold mode                           */
    TFD1015_BF_TDMSRCMAP= 0x6802,    /*!< TDM source mapping                                 */
    TFD1015_BF_TDMSRCAS= 0x6842,    /*!< Sensed value A                                     */
    TFD1015_BF_TDMSRCBS= 0x6872,    /*!< Sensed value B                                     */
    TFD1015_BF_TDMSRCACLIP= 0x68a1,    /*!< Clip flag information with combined clip flag      */
    TFD1015_BF_TDMSRCCS= 0x6902,    /*!< Sensed value C                                     */
    TFD1015_BF_TDMSRCDS= 0x6932,    /*!< Sensed value D                                     */
    TFD1015_BF_TDMSRCES= 0x6962,    /*!< Sensed value E                                     */
    TFD1015_BF_TDMVBAT= 0x6990,    /*!< Select vbat to return to TDM interface             */
    TFD1015_BF_LPMBAT= 0x6a07,    /*!< Headrom between signal and VBAT to switch to/from low power mode when LPMTM is set to 1.  */
    TFD1015_BF_LPMDLY= 0x6a84,    /*!< switching to PST block from minion                 */
    TFD1015_BF_BYPDLY= 0x6ad2,    /*!< Delay (1/fs) of the BYP_EN output pin              */
    TFD1015_BF_IPMS  = 0x6e00,    /*!< Idle power mode                                    */
    TFD1015_BF_LVLCLPPWM= 0x6f72,    /*!< Clip detect threshold control                      */
    TFD1015_BF_MUSMODE= 0x7cc0,    /*!< Music Mode                                         */
    TFD1015_BF_LNM   = 0x7ce1,    /*!< Low Noise Mode control when in Music Mode          */
    TFD1015_BF_DCPTC = 0x8401,    /*!< Voltage sense dc speaker protection time           */
    TFD1015_BF_DCPL  = 0x842c,    /*!< Voltage sense dc  speaker protection level         */
    TFD1015_BF_DCPROT= 0x84f0,    /*!< Voltage sense dc speaker protection enable         */
    TFD1015_BF_EFUSEK= 0xa107,    /*!< EFUSE KEY2 register                                */
    TFD1015_BF_KEY1LOCKED= 0xa200,    /*!< Indicates KEY1 is locked                           */
    TFD1015_BF_KEY2LOCKED= 0xa210,    /*!< Indicates KEY2 is locked                           */
    TFD1015_BF_UVPVBAT= 0xb103,    /*!< Vbat uvp set                                       */
    TFD1015_BF_UVPVDDP= 0xb145,    /*!< Vddp uvp set                                       */
    TFD1015_BF_UVPVDDIO= 0xb1a0,    /*!< Vddio uvp set                                      */
    TFD1015_BF_SWPROFIL= 0xbe0f,    /*!< Software profile data                              */
    TFD1015_BF_SWVSTEP= 0xbf0f,    /*!< Software vstep information                         */
    TFD1015_BF_PLLPDIV= 0xc934,    /*!< PLL PDIV when pll_use_direct_ctrls set to 1        */
    TFD1015_BF_PLLNDIV= 0xc987,    /*!< PLL NDIV when pll_use_direct_ctrls set to 1        */
    TFD1015_BF_PLLMDIV= 0xca0f,    /*!< PLL MDIV in PLL when pll_use_direct_ctrls set to 1 */
    TFD1015_BF_PLLSTRTM= 0xce42,    /*!< PLL startup time selection control                 */
    TFD1015_BF_ADC11GAIN= 0xf6a5,    /*!< Adc11b gain compensation setting, compensate factor (2's complement) */
} tfd1015BfEnumList_t;
#define TFD1015_NAMETABLE static tfaBfName_t Tfd1015DatasheetNames[]= {\
   { 0x0, "PWDN"},    /* Powerdown selection                               , */\
   { 0x10, "I2CR"},    /* I2C reset - auto clear                            , */\
   { 0x30, "AMPE"},    /* Activate amplifier                                , */\
   { 0x50, "EAMPHZEN"},    /* Amplifer outputs state when OFF                   , */\
   { 0x71, "INTP"},    /* Interrupt pin configuration                       , */\
   { 0x90, "QALARM"},    /* Device response to Qpump OK flag                  , */\
   { 0xa0, "BYPUVP"},    /* Bypass VBAT UVP                                   , */\
   { 0xb0, "BYPOCP"},    /* Bypass OCP                                        , */\
   { 0xc0, "QPUMPOKEN"},    /* Low drive   response to Qpump OK flag             , */\
   { 0xd0, "AMPQOKEN"},    /* Low power response to Qpump OK flag               , */\
   { 0xe0, "ENPLLSYNC"},    /* Manager control for enabling synchronisation with PLL FS, */\
   { 0xf0, "COORHYS"},    /* Select hysteresis for clock range detector        , */\
   { 0x120, "MANSCONF"},    /* I2C configured                                    , */\
   { 0x130, "BYPUVPP"},    /* Bypass VDDP UVP                                   , */\
   { 0x140, "BYPOVPP"},    /* Bypass VDDP OVP                                   , */\
   { 0x150, "BYPUVPIO"},    /* Bypass VDDIO UVP                                  , */\
   { 0x160, "MUTETO"},    /* Time out mute sequence                            , */\
   { 0x170, "MANROBOD"},    /* Device response to BOD                            , */\
   { 0x1d0, "MANEDCTH"},    /* Device response to too high DC level flag (DCTH is 1), */\
   { 0x1f0, "CSVSENLP"},    /* CSVS in Low power mode                            , */\
   { 0x203, "AUDFS"},    /* Sample rate (Fs)                                  , */\
   { 0x256, "FRACTDEL"},    /* V/I Fractional delay                              , */\
   { 0x30f, "REV"},    /* Product                                           , */\
   { 0x401, "REFCKEXT"},    /* PLL external ref clock                            , */\
   { 0x420, "BYTDMGLF"},    /* Bypass TDM FS/BCK/DATAI giltch filter             , */\
   { 0x460, "MANAOOSC"},    /* Internal oscillator control during power down mode, */\
   { 0x480, "FSSYNCEN"},    /* Enable FS synchronisation for clock divider       , */\
   { 0x490, "CLKREFSYNCEN"},    /* Enable PLL reference clock synchronisation for clock divider, */\
   { 0x4a0, "PWMFREQ"},    /* PWM output frequency select                       , */\
   { 0x500, "CGUSYNCDCG"},    /* Clock gating control for CGU synchronisation module, */\
   { 0x510, "IPMBYP"},    /* Bypass ipm synchromizser in DPSA block            , */\
   { 0x607, "DEVCAT"},    /* Product category                                  , */\
   { 0x687, "DEVREV"},    /* Version                                           , */\
   { 0x1000, "VDDS"},    /* POR (sticky flag, clear on write a '1')           , */\
   { 0x1010, "OTDS"},    /* OTP alarm (sticky flag,  clear on write a '1')    , */\
   { 0x1020, "UVDS"},    /* UVP alarm (sticky flag,  clear on write a '1')    , */\
   { 0x1030, "OVDS"},    /* VBAT OVP alarm (sticky flag,  clear on write a '1'), */\
   { 0x1040, "OCDS"},    /* OCP amplifier (sticky flag,  clear on write a '1'), */\
   { 0x1050, "NOCLK"},    /* Lost clock (sticky flag,  clear on write a '1')   , */\
   { 0x1060, "CLKOOR"},    /* External clock status (sticky flag,  clear on write a '1'), */\
   { 0x1070, "OCPOMHN"},    /* OCPOK Minion nmos  (sticky flag,  clear on write a '1'), */\
   { 0x1080, "OCPOMHP"},    /* OCPOK Minion pmos (sticky flag,  clear on write a '1'), */\
   { 0x1090, "OCPOMLN"},    /* OCPOK Minion nmos  (sticky flag,  clear on write a '1'), */\
   { 0x10a0, "OCPOMLP"},    /* OCPOK Minion pmos (sticky flag,  clear on write a '1'), */\
   { 0x10b0, "OCPOAP"},    /* OCPOK High side OUTP (sticky flag,  clear on write a '1'), */\
   { 0x10c0, "OCPOAN"},    /* OCPOK  High side OUTN (sticky flag,  clear on write a '1'), */\
   { 0x10d0, "OCPOBP"},    /* OCPOK  Low side OUTP (sticky flag,  clear on write a '1'), */\
   { 0x10e0, "OCPOBN"},    /* OCPOK Low side OUTN (sticky flag,  clear on write a '1') , */\
   { 0x10f0, "DCTH"},    /* DC level on voltage sense too high (sticky flag,  clear on write a '1'), */\
   { 0x1100, "CLKS"},    /* Clocks stable                                     , */\
   { 0x1110, "OTPB"},    /* EFUSE busy                                        , */\
   { 0x1120, "TDMERR"},    /* TDM error                                         , */\
   { 0x1130, "LPMS"},    /* Flag in low power mode                            , */\
   { 0x1140, "LNMS"},    /* Flag in low noise mode                            , */\
   { 0x1170, "PLLS"},    /* PLL lock                                          , */\
   { 0x1180, "TDMLUTER"},    /* TDM LUT error                                     , */\
   { 0x1190, "SWS"},    /* Amplifier engage                                  , */\
   { 0x11a0, "AMPS"},    /* Amplifier enable                                  , */\
   { 0x11b0, "AREFS"},    /* References enable                                 , */\
   { 0x11c0, "CLIPS"},    /* Amplifier clipping                                , */\
   { 0x11e0, "VGBS"},    /* Vddp greater than vbat                            , */\
   { 0x11f0, "FLGBSS"},    /* BSS flag                                          , */\
   { 0x1203, "MANSTATE"},    /* Device manager status                             , */\
   { 0x1243, "AMPSTE"},    /* Amplifier control status                          , */\
   { 0x1282, "TDMSTAT"},    /* TDM status bits                                   , */\
   { 0x12b1, "QPCLKSTS"},    /* QPUMP clock status                                , */\
   { 0x12d0, "WAITSYNC"},    /* CGU and PLL synchronisation status flag from CGU  , */\
   { 0x12e0, "LDMS"},    /* Flag in Low drive mode                            , */\
   { 0x1300, "BODNOK"},    /* BOD Flag VDD NOT OK (sticky flag,  clear on write a '1'), */\
   { 0x1310, "QPFAIL"},    /* QPUMP Fail Flag (sticky flag,  clear on write a '1'), */\
   { 0x1330, "VDDPUVDS"},    /* VDDP UVP alarm (sticky flag,  clear on write a '1'), */\
   { 0x1340, "VDDPOVDS"},    /* VDDP OVP alarm (sticky flag,  clear on write a '1'), */\
   { 0x1350, "VVDIOUVDS"},    /* VDDIO UVP alarm (sticky flag,  clear on write a '1'), */\
   { 0x1509, "BATS"},    /* Battery voltage monitoring (V)                    , */\
   { 0x1608, "TEMPS"},    /* IC Temperature monitoring (C)                     , */\
   { 0x1709, "VDDPS"},    /* Amplifier supply / booster voltage monitoring (V) , */\
   { 0x2000, "TDME"},    /* Enable interface                                  , */\
   { 0x2011, "AMPINSEL"},    /* Amplifier input selection                         , */\
   { 0x2030, "INPLEV"},    /* TDM output attenuation                            , */\
   { 0x2040, "TDMCLINV"},    /* Reception data to BCK clock                       , */\
   { 0x2050, "TDMFSPOL"},    /* FS polarity                                       , */\
   { 0x2061, "TDMSLOTS"},    /* N-slots in Frame                                  , */\
   { 0x2081, "TDMSLLN"},    /* N-bits in slot                                    , */\
   { 0x20a1, "TDMSSIZE"},    /* Sample size per slot                              , */\
   { 0x20c3, "TDMNBCK"},    /* N-BCK's in FS                                     , */\
   { 0x2100, "TDMDEL"},    /* Data delay to FS                                  , */\
   { 0x2110, "TDMADJ"},    /* Data adjustment                                   , */\
   { 0x2120, "TDMSPKE"},    /* Control audio TDM input channel 0                 , */\
   { 0x2130, "TDMDCE"},    /* Control audio TDM input channel 1                 , */\
   { 0x2140, "TDMSRC0E"},    /* Control TDM source0 data channel                  , */\
   { 0x2150, "TDMSRC1E"},    /* Control TDM source1 data channel                  , */\
   { 0x2160, "TDMSRC2E"},    /* Control TDM source2 data channel                  , */\
   { 0x2183, "TDMSPKS"},    /* TDM slot for input channel 0                      , */\
   { 0x21c3, "TDMDCS"},    /* TDM slot for input channel 1                      , */\
   { 0x2203, "TDMSRC0S"},    /* Slot Position of TDM source0 channel data         , */\
   { 0x2243, "TDMSRC1S"},    /* Slot Position of TDM source1 channel data         , */\
   { 0x2283, "TDMSRC2S"},    /* Slot Position of TDM source2 channel data         , */\
   { 0x4000, "ISTVDDS"},    /* Interrupt status POR                              , */\
   { 0x4010, "ISTUVDS"},    /* Interrupt status VDDIO  UVP alarm                 , */\
   { 0x4020, "ISTOTDS"},    /* Interrupt status OTP alarm                        , */\
   { 0x4030, "ISTOCPR"},    /* Interrupt status OCP alarm                        , */\
   { 0x4040, "ISTUVVDDIO"},    /* Interrupt status VBAT UVP alarm                   , */\
   { 0x4050, "ISTTDMER"},    /* Interrupt status TDM error                        , */\
   { 0x4060, "ISTNOCLK"},    /* Interrupt status lost clock                       , */\
   { 0x4070, "ISTDCTH"},    /* Interrupt status dc too high                      , */\
   { 0x4080, "ISTBODNOK"},    /* Interrupt status brown out detected               , */\
   { 0x4090, "ISTCOOR"},    /* Interrupt status clock out of range               , */\
   { 0x40a0, "ISTOVDS"},    /* Interrupt status VBAT OVP alarm                   , */\
   { 0x40b0, "ISTQPFAIL"},    /* Interrupt status qpump failure                    , */\
   { 0x40c0, "ISTUVVDDP"},    /* Interrupt status VDDP UVP alarm                   , */\
   { 0x40d0, "ISTOVVDDP"},    /* Interrupt status VDDP  OVP alarm                  , */\
   { 0x4400, "ICLVDDS"},    /* Clear interrupt status POR                        , */\
   { 0x4410, "ICLUVVDDIO"},    /* Clear interrupt status VDDIO UVP alarm            , */\
   { 0x4420, "ICLOTDS"},    /* Clear interrupt status OTP alarm                  , */\
   { 0x4430, "ICLOCPR"},    /* Clear interrupt status OCP alarm                  , */\
   { 0x4440, "ICLUVDS"},    /* Clear interrupt status VBAT UVP alarm             , */\
   { 0x4450, "ICLTDMER"},    /* Clear interrupt status TDM error                  , */\
   { 0x4460, "ICLNOCLK"},    /* Clear interrupt status lost clk                   , */\
   { 0x4470, "ICLDCTH"},    /* Clear interrupt status dc too high                , */\
   { 0x4480, "ICLBODNOK"},    /* Clear interrupt status brown out detected         , */\
   { 0x4490, "ICLCOOR"},    /* Clear interrupt status clock out of range         , */\
   { 0x44a0, "ICLOVDS"},    /* Clear interrupt status VBAT OVP alarm             , */\
   { 0x44b0, "ICLQPFAIL"},    /* Clear interrupt status qpump failure              , */\
   { 0x44c0, "ICLUVVDDP"},    /* Clear interrupt status VDDP UVP alarm             , */\
   { 0x44d0, "ICLOVVDDP"},    /* Clear interrupt status VDDP OVP alarm             , */\
   { 0x4800, "IEVDDS"},    /* Enable interrupt POR                              , */\
   { 0x4810, "IEUVVDDIO"},    /* Enable interrupt VDDIO UVP alarm                  , */\
   { 0x4820, "IEOTDS"},    /* Enable interrupt OTP alarm                        , */\
   { 0x4830, "IEOCPR"},    /* Enable interrupt OCP alarm                        , */\
   { 0x4840, "IEUVDS"},    /* Enable interrupt VBAT UVP alarm                   , */\
   { 0x4850, "IETDMER"},    /* Enable interrupt TDM error                        , */\
   { 0x4860, "IENOCLK"},    /* Enable interrupt lost clk                         , */\
   { 0x4870, "IEDCTH"},    /* Enable interrupt dc too high                      , */\
   { 0x4880, "IEBODNOK"},    /* Enable interrupt brown out detect                 , */\
   { 0x4890, "IECOOR"},    /* Enable interrupt clock out of range               , */\
   { 0x48a0, "IEOVDS"},    /* Enable interrupt VBAT OVP alarm                   , */\
   { 0x48b0, "IEQPFAIL"},    /* Enable interrupt qpump failure                    , */\
   { 0x48c0, "IEUVVDDP"},    /* Enable interrupt VDDP UVP alarm                   , */\
   { 0x48d0, "IEOVVDDP"},    /* Enable interrupt VDDP OVP alarm                   , */\
   { 0x4c00, "IPOVDDS"},    /* Interrupt polarity POR                            , */\
   { 0x4c10, "IPOUVVDDIO"},    /* Interrupt polarity VDDIO UVP alarm                , */\
   { 0x4c20, "IPOOTDS"},    /* Interrupt polarity OTP alarm                      , */\
   { 0x4c30, "IPOOCPR"},    /* Interrupt polarity OCP alarm                      , */\
   { 0x4c40, "IPOUVDS"},    /* Interrupt polarity VBAT UVP alarm                 , */\
   { 0x4c50, "IPOTDMER"},    /* Interrupt polarity TDM error                      , */\
   { 0x4c60, "IPONOCLK"},    /* Interrupt polarity lost clk                       , */\
   { 0x4c70, "IPODCTH"},    /* Interrupt polarity dc too high                    , */\
   { 0x4c80, "IPOBODNOK"},    /* Interrupt polarity brown out detect               , */\
   { 0x4c90, "IPOCOOR"},    /* Interrupt polarity clock out of range             , */\
   { 0x4ca0, "IPOOVDS"},    /* Interrupt polarity VBAT OVP alarm                 , */\
   { 0x4cb0, "IPOQPFAIL"},    /* Interrupt polarity qpump failure                  , */\
   { 0x4cc0, "IPOUVVDDP"},    /* Interrupt polarity VDDP UVP alarm                 , */\
   { 0x4cd0, "IPOOVVDDP"},    /* Interrupt polarity VDDP  OVP alarm                , */\
   { 0x50d0, "BSSCLRST"},    /* Reset clipper  auto-clear                         , */\
   { 0x50e0, "BSSR"},    /* Battery voltage read out in BATS bitfield         , */\
   { 0x50f0, "BSSBY"},    /* Bypass battery safeguard                          , */\
   { 0x5130, "USOUND"},    /* Ultrasound mode                                   , */\
   { 0x5140, "DCDITH"},    /* DC dithering selection                            , */\
   { 0x5150, "HPFBYP"},    /* Bypass HPF                                        , */\
   { 0x5203, "PWMPH"},    /* Select pwm phase wrt TDM_FS signal                , */\
   { 0x5257, "AMPGAIN"},    /* Amplifier gain                                    , */\
   { 0x52f0, "BYPDLYLINE"},    /* Bypass the interpolator delay line                , */\
   { 0x5481, "AMPSLP"},    /* Extreme amplifier slope control                   , */\
   { 0x5a00, "BSSMVBS"},    /* Min_vbat source select                            , */\
   { 0x5a13, "DCMCC"},    /* Battery current limiter initial value             , */\
   { 0x5a53, "BSST"},    /* BSS threshold Vbat value (reducing gain)          , */\
   { 0x5a91, "BSSAR"},    /* BSS attack rate (reducing gain)                   , */\
   { 0x5ab3, "BSSRR"},    /* BSS release rate  (reducing gain)                 , */\
   { 0x5af0, "BSSMULT"},    /* Multiply attack rate by 8                         , */\
   { 0x5b03, "BSSHT"},    /* BSS hold time (reducing gain)                     , */\
   { 0x5b41, "BSSS"},    /* BSS steepness (reducing gain)                     , */\
   { 0x5b62, "BSSRL"},    /* BSS allowed reduction level (reducing gain)       , */\
   { 0x5b93, "BSSDCT"},    /* BSS threshold Vbat value (reducing DCMCC)         , */\
   { 0x5bd1, "BSSDCAR"},    /* BSS attack rate  (reducing DCMCC)                 , */\
   { 0x5c03, "BSSDCRR"},    /* BSS release rate  (reducing DCMCC)                , */\
   { 0x5c43, "BSSDCHT"},    /* BSS hold time (reducing DCMCC)                    , */\
   { 0x5c81, "BSSDCS"},    /* Battery supply safeguard steepness (reducing DCMCC), */\
   { 0x5ca2, "BSSDCRL"},    /* BSS allowed reduction level (reducing DCMCC)      , */\
   { 0x5cd1, "DCLIPFLS"},    /* Select source for BSS flag                        , */\
   { 0x5f54, "TDMSPKG"},    /* TDM signal attenuation                            , */\
   { 0x60e1, "IPM"},    /* Idle power mode control                           , */\
   { 0x62b2, "LDMSEG"},    /* Amplifier low drive   mode                        , */\
   { 0x63c1, "LDM"},    /* Low drive mode detector control                   , */\
   { 0x63e1, "RCVM"},    /* Handset/Receiver mode                             , */\
   { 0x6555, "VBATHOLD"},    /* Select hold time for VBAT(min/max)                , */\
   { 0x65b0, "VBATMAX"},    /* Select between vbat minimum or maximum for Chip Sense output on TDM  VBAT(min/max), */\
   { 0x66e1, "LPM"},    /* Low power mode control                            , */\
   { 0x6705, "LPMT"},    /* Low power mode  amplitude trigger level           , */\
   { 0x6765, "LPMHLD"},    /* Low power mode detector   ctrl hold time before low audio is reckoned to be low audio, */\
   { 0x67f0, "LPMTM"},    /* Low power threshold mode                          , */\
   { 0x6802, "TDMSRCMAP"},    /* TDM source mapping                                , */\
   { 0x6842, "TDMSRCAS"},    /* Sensed value A                                    , */\
   { 0x6872, "TDMSRCBS"},    /* Sensed value B                                    , */\
   { 0x68a1, "TDMSRCACLIP"},    /* Clip flag information with combined clip flag     , */\
   { 0x6902, "TDMSRCCS"},    /* Sensed value C                                    , */\
   { 0x6932, "TDMSRCDS"},    /* Sensed value D                                    , */\
   { 0x6962, "TDMSRCES"},    /* Sensed value E                                    , */\
   { 0x6990, "TDMVBAT"},    /* Select vbat to return to TDM interface            , */\
   { 0x6a07, "LPMBAT"},    /* Headrom between signal and VBAT to switch to/from low power mode when LPMTM is set to 1. , */\
   { 0x6a84, "LPMDLY"},    /* switching to PST block from minion                , */\
   { 0x6ad2, "BYPDLY"},    /* Delay (1/fs) of the BYP_EN output pin             , */\
   { 0x6e00, "IPMS"},    /* Idle power mode                                   , */\
   { 0x6f72, "LVLCLPPWM"},    /* Clip detect threshold control                     , */\
   { 0x7cc0, "MUSMODE"},    /* Music Mode                                        , */\
   { 0x7ce1, "LNM"},    /* Low Noise Mode control when in Music Mode         , */\
   { 0x8401, "DCPTC"},    /* Voltage sense dc speaker protection time          , */\
   { 0x842c, "DCPL"},    /* Voltage sense dc  speaker protection level        , */\
   { 0x84f0, "DCPROT"},    /* Voltage sense dc speaker protection enable        , */\
   { 0xa107, "EFUSEK"},    /* EFUSE KEY2 register                               , */\
   { 0xa200, "KEY1LOCKED"},    /* Indicates KEY1 is locked                          , */\
   { 0xa210, "KEY2LOCKED"},    /* Indicates KEY2 is locked                          , */\
   { 0xb103, "UVPVBAT"},    /* Vbat uvp set                                      , */\
   { 0xb145, "UVPVDDP"},    /* Vddp uvp set                                      , */\
   { 0xb1a0, "UVPVDDIO"},    /* Vddio uvp set                                     , */\
   { 0xbe0f, "SWPROFIL"},    /* Software profile data                             , */\
   { 0xbf0f, "SWVSTEP"},    /* Software vstep information                        , */\
   { 0xc934, "PLLPDIV"},    /* PLL PDIV when pll_use_direct_ctrls set to 1       , */\
   { 0xc987, "PLLNDIV"},    /* PLL NDIV when pll_use_direct_ctrls set to 1       , */\
   { 0xca0f, "PLLMDIV"},    /* PLL MDIV in PLL when pll_use_direct_ctrls set to 1, */\
   { 0xce42, "PLLSTRTM"},    /* PLL startup time selection control                , */\
   { 0xf6a5, "ADC11GAIN"},    /* Adc11b gain compensation setting, compensate factor (2's complement), */\
   { 0xffff,"Unknown bitfield enum" }   /* not found */\
};

#define TFD1015_BITNAMETABLE static tfaBfName_t Tfd1015BitNames[]= {\
   { 0x0, "powerdown"},    /* Powerdown selection                               , */\
   { 0x10, "reset"},    /* I2C reset - auto clear                            , */\
   { 0x30, "enbl_amplifier"},    /* Activate amplifier                                , */\
   { 0x50, "enbl_amp_hiz"},    /* Amplifer outputs state when OFF                   , */\
   { 0x71, "int_pad_io"},    /* Interrupt pin configuration                       , */\
   { 0x90, "man_enbl_qpump_ok"},    /* Device response to Qpump OK flag                  , */\
   { 0xa0, "bypass_vbat_uvp"},    /* Bypass VBAT UVP                                   , */\
   { 0xb0, "bypass_ocp"},    /* Bypass OCP                                        , */\
   { 0xc0, "enbl_dpsa_qpump_ok"},    /* Low drive   response to Qpump OK flag             , */\
   { 0xd0, "enbl_amp_qpump_ok"},    /* Low power response to Qpump OK flag               , */\
   { 0xe0, "enbl_pll_synchronisation"},    /* Manager control for enabling synchronisation with PLL FS, */\
   { 0xf0, "sel_hysteresis"},    /* Select hysteresis for clock range detector        , */\
   { 0x110, "addr_en"},    /* Force I2C address detection                       , */\
   { 0x120, "src_set_configured"},    /* I2C configured                                    , */\
   { 0x130, "bypass_vddp_uvp"},    /* Bypass VDDP UVP                                   , */\
   { 0x140, "bypass_vddp_ovp"},    /* Bypass VDDP OVP                                   , */\
   { 0x150, "bypass_vddio_uvp"},    /* Bypass VDDIO UVP                                  , */\
   { 0x160, "disable_mute_time_out"},    /* Time out mute sequence                            , */\
   { 0x170, "man_enbl_brown"},    /* Device response to BOD                            , */\
   { 0x1d0, "man_enbl_dc_too_high"},    /* Device response to too high DC level flag (DCTH is 1), */\
   { 0x1f0, "csvs_in_lpm"},    /* CSVS in Low power mode                            , */\
   { 0x203, "audio_fs"},    /* Sample rate (Fs)                                  , */\
   { 0x256, "cs_frac_delay"},    /* V/I Fractional delay                              , */\
   { 0x30f, "product"},    /* Product                                           , */\
   { 0x401, "pll_clkin_sel"},    /* PLL external ref clock                            , */\
   { 0x420, "bypass_tdm_glitch_filter"},    /* Bypass TDM FS/BCK/DATAI giltch filter             , */\
   { 0x460, "enbl_osc_auto_off"},    /* Internal oscillator control during power down mode, */\
   { 0x480, "enbl_fs_sync"},    /* Enable FS synchronisation for clock divider       , */\
   { 0x490, "enbl_clkref_sync"},    /* Enable PLL reference clock synchronisation for clock divider, */\
   { 0x4a0, "sel_pwm_freq"},    /* PWM output frequency select                       , */\
   { 0x500, "disable_cgu_sync_cgate"},    /* Clock gating control for CGU synchronisation module, */\
   { 0x510, "dpsa_bypass_ipm_sync"},    /* Bypass ipm synchromizser in DPSA block            , */\
   { 0x520, "hs_mode"},    /* I2C high speed mode control                       , */\
   { 0x530, "io_flt_byp"},    /* Bypass the built-in filters of SCL and SDA        , */\
   { 0x607, "category"},    /* Product category                                  , */\
   { 0x687, "version"},    /* Version                                           , */\
   { 0x802, "ctrl_on2off_criterion"},    /* Amplifier on-off criteria for shutdown            , */\
   { 0x834, "cmff_ctrl_nskip"},    /* Skip or shorten CMFF pulses in 4096fs cycles to create headroom at the bottom , */\
   { 0x883, "cmff_ctrl_nclipmax"},    /* Limit lenght CMFF pulses to remove the above headroom in case of clipping at the top vddp is 15V, */\
   { 0xf0f, "hidden_code"},    /* Hidden code to enable access to key registers     , */\
   { 0x1000, "flag_por"},    /* POR (sticky flag, clear on write a '1')           , */\
   { 0x1010, "flag_otpok"},    /* OTP alarm (sticky flag,  clear on write a '1')    , */\
   { 0x1020, "flag_vbat_uvpok"},    /* UVP alarm (sticky flag,  clear on write a '1')    , */\
   { 0x1030, "flag_vbat_ovpok"},    /* VBAT OVP alarm (sticky flag,  clear on write a '1'), */\
   { 0x1040, "flag_ocp_alarm"},    /* OCP amplifier (sticky flag,  clear on write a '1'), */\
   { 0x1050, "flag_lost_clk"},    /* Lost clock (sticky flag,  clear on write a '1')   , */\
   { 0x1060, "flag_clk_out_of_range"},    /* External clock status (sticky flag,  clear on write a '1'), */\
   { 0x1070, "flag_minion_ocpokan"},    /* OCPOK Minion nmos  (sticky flag,  clear on write a '1'), */\
   { 0x1080, "flag_minion_ocpokap"},    /* OCPOK Minion pmos (sticky flag,  clear on write a '1'), */\
   { 0x1090, "flag_minion_ocpokbn"},    /* OCPOK Minion nmos  (sticky flag,  clear on write a '1'), */\
   { 0x10a0, "flag_minion_ocpokbp"},    /* OCPOK Minion pmos (sticky flag,  clear on write a '1'), */\
   { 0x10b0, "flag_ocpokap"},    /* OCPOK High side OUTP (sticky flag,  clear on write a '1'), */\
   { 0x10c0, "flag_ocpokan"},    /* OCPOK  High side OUTN (sticky flag,  clear on write a '1'), */\
   { 0x10d0, "flag_ocpokbp"},    /* OCPOK  Low side OUTP (sticky flag,  clear on write a '1'), */\
   { 0x10e0, "flag_ocpokbn"},    /* OCPOK Low side OUTN (sticky flag,  clear on write a '1') , */\
   { 0x10f0, "flag_dc_too_high"},    /* DC level on voltage sense too high (sticky flag,  clear on write a '1'), */\
   { 0x1100, "flag_clocks_stable"},    /* Clocks stable                                     , */\
   { 0x1110, "flag_efuse_busy"},    /* EFUSE busy                                        , */\
   { 0x1120, "flag_tdm_error"},    /* TDM error                                         , */\
   { 0x1130, "flag_low_power_mode"},    /* Flag in low power mode                            , */\
   { 0x1140, "flag_low_noise_mode"},    /* Flag in low noise mode                            , */\
   { 0x1170, "flag_pll_lock"},    /* PLL lock                                          , */\
   { 0x1180, "flag_tdm_lut_error"},    /* TDM LUT error                                     , */\
   { 0x1190, "flag_engage"},    /* Amplifier engage                                  , */\
   { 0x11a0, "flag_enbl_amp"},    /* Amplifier enable                                  , */\
   { 0x11b0, "flag_enbl_ref"},    /* References enable                                 , */\
   { 0x11c0, "flag_clip"},    /* Amplifier clipping                                , */\
   { 0x11d0, "flag_low_drive_mode"},    /* VBAT to VBST switch state                         , */\
   { 0x11e0, "flag_vddp_gt_vbat"},    /* Vddp greater than vbat                            , */\
   { 0x11f0, "flag_bss"},    /* BSS flag                                          , */\
   { 0x1203, "man_state"},    /* Device manager status                             , */\
   { 0x1243, "amp_ctrl_state"},    /* Amplifier control status                          , */\
   { 0x1282, "flag_tdm_status"},    /* TDM status bits                                   , */\
   { 0x12b1, "flag_qpump_clk_freq"},    /* QPUMP clock status                                , */\
   { 0x12d0, "flag_waiting_for_sync"},    /* CGU and PLL synchronisation status flag from CGU  , */\
   { 0x12e0, "flag_active_pst_sections"},    /* Flag in Low drive mode                            , */\
   { 0x1300, "flag_bod_vddd_nok"},    /* BOD Flag VDD NOT OK (sticky flag,  clear on write a '1'), */\
   { 0x1310, "flag_qpump_fail"},    /* QPUMP Fail Flag (sticky flag,  clear on write a '1'), */\
   { 0x1330, "flag_vddp_uvpok"},    /* VDDP UVP alarm (sticky flag,  clear on write a '1'), */\
   { 0x1340, "flag_vddp_ovpok"},    /* VDDP OVP alarm (sticky flag,  clear on write a '1'), */\
   { 0x1350, "flag_vddio_uvpok"},    /* VDDIO UVP alarm (sticky flag,  clear on write a '1'), */\
   { 0x1509, "bat_adc"},    /* Battery voltage monitoring (V)                    , */\
   { 0x1608, "temp_adc"},    /* IC Temperature monitoring (C)                     , */\
   { 0x1709, "vddp_adc"},    /* Amplifier supply / booster voltage monitoring (V) , */\
   { 0x1800, "pll_mdiv_mode"},    /* Feedback divider mode selection signal, for testing, */\
   { 0x1817, "pll_dpll_itrim"},    /* Dpll trim cco current code , for testing                                                                                  , */\
   { 0x1894, "pll_mdiv_ps"},    /* Prescaler threshold value in feedback divider for testing , */\
   { 0x190b, "pll_mdiv_p"},    /* Program counter threshold value in feedback divider, for testing , */\
   { 0x19c3, "pll_mdiv_s"},    /* Swallow counter threshold value in feedback divider, for testing , */\
   { 0x1a0f, "pll_dpll_comp_val"},    /* Comparison value in dpll, for testing             , */\
   { 0x2000, "tdm_enable"},    /* Enable interface                                  , */\
   { 0x2011, "tdm_vamp_sel"},    /* Amplifier input selection                         , */\
   { 0x2030, "tdm_input_level"},    /* TDM output attenuation                            , */\
   { 0x2040, "tdm_clk_inversion"},    /* Reception data to BCK clock                       , */\
   { 0x2050, "tdm_fs_ws_polarity"},    /* FS polarity                                       , */\
   { 0x2061, "tdm_nb_of_slots"},    /* N-slots in Frame                                  , */\
   { 0x2081, "tdm_slot_length"},    /* N-bits in slot                                    , */\
   { 0x20a1, "tdm_sample_size"},    /* Sample size per slot                              , */\
   { 0x20c3, "tdm_nbck"},    /* N-BCK's in FS                                     , */\
   { 0x2100, "tdm_data_delay"},    /* Data delay to FS                                  , */\
   { 0x2110, "tdm_data_adjustment"},    /* Data adjustment                                   , */\
   { 0x2120, "tdm_sink0_enable"},    /* Control audio TDM input channel 0                 , */\
   { 0x2130, "tdm_sink1_enable"},    /* Control audio TDM input channel 1                 , */\
   { 0x2140, "tdm_source0_enable"},    /* Control TDM source0 data channel                  , */\
   { 0x2150, "tdm_source1_enable"},    /* Control TDM source1 data channel                  , */\
   { 0x2160, "tdm_source2_enable"},    /* Control TDM source2 data channel                  , */\
   { 0x2183, "tdm_sink0_slot"},    /* TDM slot for input channel 0                      , */\
   { 0x21c3, "tdm_sink1_slot"},    /* TDM slot for input channel 1                      , */\
   { 0x2203, "tdm_source0_slot"},    /* Slot Position of TDM source0 channel data         , */\
   { 0x2243, "tdm_source1_slot"},    /* Slot Position of TDM source1 channel data         , */\
   { 0x2283, "tdm_source2_slot"},    /* Slot Position of TDM source2 channel data         , */\
   { 0x4000, "int_out_flag_por"},    /* Interrupt status POR                              , */\
   { 0x4010, "int_out_flag_vddio_uvpok"},    /* Interrupt status VDDIO  UVP alarm                 , */\
   { 0x4020, "int_out_flag_otpok"},    /* Interrupt status OTP alarm                        , */\
   { 0x4030, "int_out_flag_ocp_alarm"},    /* Interrupt status OCP alarm                        , */\
   { 0x4040, "int_out_flag_vbat_uvpok"},    /* Interrupt status VBAT UVP alarm                   , */\
   { 0x4050, "int_out_flag_tdm_error"},    /* Interrupt status TDM error                        , */\
   { 0x4060, "int_out_flag_lost_clk"},    /* Interrupt status lost clock                       , */\
   { 0x4070, "int_out_flag_dc_too_high"},    /* Interrupt status dc too high                      , */\
   { 0x4080, "int_out_flag_bod_vddd_nok"},    /* Interrupt status brown out detected               , */\
   { 0x4090, "int_out_flag_clk_out_of_range"},    /* Interrupt status clock out of range               , */\
   { 0x40a0, "int_out_flag_vbat_ovpok"},    /* Interrupt status VBAT OVP alarm                   , */\
   { 0x40b0, "int_out_flag_qpump_fail"},    /* Interrupt status qpump failure                    , */\
   { 0x40c0, "int_out_flag_vddp_uvpok"},    /* Interrupt status VDDP UVP alarm                   , */\
   { 0x40d0, "int_out_flag_vddp_ovpok"},    /* Interrupt status VDDP  OVP alarm                  , */\
   { 0x4400, "int_in_flag_por"},    /* Clear interrupt status POR                        , */\
   { 0x4410, "int_in_flag_vddio_uvpok"},    /* Clear interrupt status VDDIO UVP alarm            , */\
   { 0x4420, "int_in_flag_otpok"},    /* Clear interrupt status OTP alarm                  , */\
   { 0x4430, "int_in_flag_ocp_alarm"},    /* Clear interrupt status OCP alarm                  , */\
   { 0x4440, "int_in_flag_vbat_uvpok"},    /* Clear interrupt status VBAT UVP alarm             , */\
   { 0x4450, "int_in_flag_tdm_error"},    /* Clear interrupt status TDM error                  , */\
   { 0x4460, "int_in_flag_lost_clk"},    /* Clear interrupt status lost clk                   , */\
   { 0x4470, "int_in_flag_dc_too_high"},    /* Clear interrupt status dc too high                , */\
   { 0x4480, "int_in_flag_bod_vddd_nok"},    /* Clear interrupt status brown out detected         , */\
   { 0x4490, "int_in_flag_clk_out_of_range"},    /* Clear interrupt status clock out of range         , */\
   { 0x44a0, "int_in_flag_vbat_ovpok"},    /* Clear interrupt status VBAT OVP alarm             , */\
   { 0x44b0, "int_in_flag_qpump_fail"},    /* Clear interrupt status qpump failure              , */\
   { 0x44c0, "int_in_flag_vddp_uvpok"},    /* Clear interrupt status VDDP UVP alarm             , */\
   { 0x44d0, "int_in_flag_vddp_ovpok"},    /* Clear interrupt status VDDP OVP alarm             , */\
   { 0x4800, "int_enable_flag_por"},    /* Enable interrupt POR                              , */\
   { 0x4810, "int_enable_flag_vddio_uvpok"},    /* Enable interrupt VDDIO UVP alarm                  , */\
   { 0x4820, "int_enable_flag_otpok"},    /* Enable interrupt OTP alarm                        , */\
   { 0x4830, "int_enable_flag_ocp_alarm"},    /* Enable interrupt OCP alarm                        , */\
   { 0x4840, "int_enable_flag_vbat_uvpok"},    /* Enable interrupt VBAT UVP alarm                   , */\
   { 0x4850, "int_enable_flag_tdm_error"},    /* Enable interrupt TDM error                        , */\
   { 0x4860, "int_enable_flag_lost_clk"},    /* Enable interrupt lost clk                         , */\
   { 0x4870, "int_enable_flag_dc_too_high"},    /* Enable interrupt dc too high                      , */\
   { 0x4880, "int_enable_flag_bod_vddd_nok"},    /* Enable interrupt brown out detect                 , */\
   { 0x4890, "int_enable_flag_clk_out_of_range"},    /* Enable interrupt clock out of range               , */\
   { 0x48a0, "int_enable_flag_vbat_ovpok"},    /* Enable interrupt VBAT OVP alarm                   , */\
   { 0x48b0, "int_enable_flag_qpump_fail"},    /* Enable interrupt qpump failure                    , */\
   { 0x48c0, "int_enable_flag_vddp_uvpok"},    /* Enable interrupt VDDP UVP alarm                   , */\
   { 0x48d0, "int_enable_flag_vddp_ovpok"},    /* Enable interrupt VDDP OVP alarm                   , */\
   { 0x4c00, "int_polarity_flag_por"},    /* Interrupt polarity POR                            , */\
   { 0x4c10, "int_polarity_flag_vddio_uvpok"},    /* Interrupt polarity VDDIO UVP alarm                , */\
   { 0x4c20, "int_polarity_flag_otpok"},    /* Interrupt polarity OTP alarm                      , */\
   { 0x4c30, "int_polarity_flag_ocp_alarm"},    /* Interrupt polarity OCP alarm                      , */\
   { 0x4c40, "int_polarity_flag_vbat_uvpok"},    /* Interrupt polarity VBAT UVP alarm                 , */\
   { 0x4c50, "int_polarity_flag_tdm_error"},    /* Interrupt polarity TDM error                      , */\
   { 0x4c60, "int_polarity_flag_lost_clk"},    /* Interrupt polarity lost clk                       , */\
   { 0x4c70, "int_polarity_flag_dc_too_high"},    /* Interrupt polarity dc too high                    , */\
   { 0x4c80, "int_polarity_flag_bod_vddd_nok"},    /* Interrupt polarity brown out detect               , */\
   { 0x4c90, "int_polarity_flag_clk_out_of_range"},    /* Interrupt polarity clock out of range             , */\
   { 0x4ca0, "int_polarity_flag_vbat_ovpok"},    /* Interrupt polarity VBAT OVP alarm                 , */\
   { 0x4cb0, "int_polarity_flag_qpump_fail"},    /* Interrupt polarity qpump failure                  , */\
   { 0x4cc0, "int_polarity_flag_vddp_uvpok"},    /* Interrupt polarity VDDP UVP alarm                 , */\
   { 0x4cd0, "int_polarity_flag_vddp_ovpok"},    /* Interrupt polarity VDDP  OVP alarm                , */\
   { 0x50d0, "rst_min_vbat"},    /* Reset clipper  auto-clear                         , */\
   { 0x50e0, "sel_vbat"},    /* Battery voltage read out in BATS bitfield         , */\
   { 0x50f0, "bypass_clipper"},    /* Bypass battery safeguard                          , */\
   { 0x5130, "amp_ultrasound"},    /* Ultrasound mode                                   , */\
   { 0x5140, "sel_dithering"},    /* DC dithering selection                            , */\
   { 0x5150, "bypass_hp"},    /* Bypass HPF                                        , */\
   { 0x5166, "audio_delay"},    /* Set the audio data delay time before send to spkr , */\
   { 0x5203, "sel_pwm_phase"},    /* Select pwm phase wrt TDM_FS signal                , */\
   { 0x5257, "gain"},    /* Amplifier gain                                    , */\
   { 0x52f0, "bypass_dly_line"},    /* Bypass the interpolator delay line                , */\
   { 0x5452, "amp_drive"},    /* Drive setting of AMP powerstage when amp_use_direct_ctrls is set to 1, */\
   { 0x5481, "amp_pst_slope"},    /* Extreme amplifier slope control                   , */\
   { 0x54c1, "amp_pst_bbm"},    /* Amplifier break-before-make delay                 , */\
   { 0x5810, "hard_mute"},    /* Hard mute - PWM                                   , */\
   { 0x5823, "disable_dpwm_outputs"},    /* Disable dPwm outputs                              , */\
   { 0x5860, "disable_cmff"},    /* Disable cmff                                      , */\
   { 0x5870, "dpwm_sel_dc_in"},    /* Select I2C dc-level as input to dpwm modulator    , */\
   { 0x5880, "cmff_sel_dc_in"},    /* Select i2c_dc_level as input to cmff              , */\
   { 0x5907, "dpwm_dc_in"},    /* Dc_level input to derive dpwm signals             , */\
   { 0x5987, "cmff_dc_in"},    /* Dc_level input to derive cmff signals             , */\
   { 0x5a00, "bss_minvbat_select"},    /* Min_vbat source select                            , */\
   { 0x5a13, "bss_dcmcc"},    /* Battery current limiter initial value             , */\
   { 0x5a53, "bss_threshold"},    /* BSS threshold Vbat value (reducing gain)          , */\
   { 0x5a91, "bss_attack_rate"},    /* BSS attack rate (reducing gain)                   , */\
   { 0x5ab3, "bss_release_rate"},    /* BSS release rate  (reducing gain)                 , */\
   { 0x5af0, "bssar_mult8"},    /* Multiply attack rate by 8                         , */\
   { 0x5b03, "bss_hold_time"},    /* BSS hold time (reducing gain)                     , */\
   { 0x5b41, "bss_steepness"},    /* BSS steepness (reducing gain)                     , */\
   { 0x5b62, "bss_reduction_limit"},    /* BSS allowed reduction level (reducing gain)       , */\
   { 0x5b93, "bssdc_threshold"},    /* BSS threshold Vbat value (reducing DCMCC)         , */\
   { 0x5bd1, "bssdc_attact_rate"},    /* BSS attack rate  (reducing DCMCC)                 , */\
   { 0x5c03, "bssdc_release_rate"},    /* BSS release rate  (reducing DCMCC)                , */\
   { 0x5c43, "bssdc_hold_time"},    /* BSS hold time (reducing DCMCC)                    , */\
   { 0x5c81, "bssdc_steepness"},    /* Battery supply safeguard steepness (reducing DCMCC), */\
   { 0x5ca2, "bssdc_reduction_limit"},    /* BSS allowed reduction level (reducing DCMCC)      , */\
   { 0x5cd1, "bss_flag_select"},    /* Select source for BSS flag                        , */\
   { 0x5f54, "ctrl_attr"},    /* TDM signal attenuation                            , */\
   { 0x6005, "idle_power_cal_offset"},    /* Idle power mode detector ctrl cal_offset from gain module , */\
   { 0x6065, "idle_power_zero_lvl"},    /* IIdle power mode zero crossing detection level (TDMSPKG and INPLEV set to 0), */\
   { 0x60e1, "idle_power_mode"},    /* Idle power mode control                           , */\
   { 0x6105, "idle_power_threshold_lvl"},    /* Idle power mode amplitude trigger level (TDMSPKG and INPLEV set to 0, */\
   { 0x6165, "idle_power_hold_time"},    /* Idle power mode detector ctrl hold time before low audio is reckoned to be low audio, */\
   { 0x61c0, "disable_idle_power_mode"},    /* Idle power mode detector control                  , */\
   { 0x6203, "qpump_clkdiv_follower_mode"},    /* Qpump clock  divider follower mode                , */\
   { 0x6243, "qpump_clkdiv_low_drive_mode"},    /* Qpump clock  divider low drive mode               , */\
   { 0x6282, "amp_drive_normal_mode"},    /* Amplifier normal drive  mode                      , */\
   { 0x62b2, "amp_drive_low_drive_mode"},    /* Amplifier low drive   mode                        , */\
   { 0x6305, "low_drive_threshold_lvl"},    /* Low  drive mode amplitude trigger level           , */\
   { 0x6365, "low_drive_hold_time"},    /* Low drive  mode detector ctrl hold time before low audio is reckoned to be low audio, */\
   { 0x63c1, "low_drive_detector_mode"},    /* Low drive mode detector control                   , */\
   { 0x63e1, "amp_lnm"},    /* Handset/Receiver mode                             , */\
   { 0x6400, "enable_vddp_gt_vbat"},    /* Allow vddp_gt_vbat to block low_drivemode         , */\
   { 0x6503, "vth_vddpvbat"},    /* Select vddp-vbat threshold signal                 , */\
   { 0x6540, "lpen_vddpvbat"},    /* Select vddp-vbat filtred vs unfiltered compare    , */\
   { 0x6555, "vbat_min_hold_time"},    /* Select hold time for VBAT(min/max)                , */\
   { 0x65b0, "vbat_min_max"},    /* Select between vbat minimum or maximum for Chip Sense output on TDM  VBAT(min/max), */\
   { 0x6605, "low_power_cal_offset"},    /* Low power mode detector   ctrl cal_offset from gain module , */\
   { 0x6665, "low_power_zero_lvl"},    /* Low power mode   zero crossing  detection level   , */\
   { 0x66e1, "low_power_mode"},    /* Low power mode control                            , */\
   { 0x6705, "low_power_threshold_lvl"},    /* Low power mode  amplitude trigger level           , */\
   { 0x6765, "low_power_hold_time"},    /* Low power mode detector   ctrl hold time before low audio is reckoned to be low audio, */\
   { 0x67c0, "disable_low_power_mode"},    /* Low power mode  detector control                  , */\
   { 0x67d0, "amp_idle_not"},    /* PST/Minion OFF pull down control when amp_use_direct_ctrls is set to 1, */\
   { 0x67e0, "amp_minion_mode"},    /* Low power mode/Minion active when amp_use_direct_ctrls is set to 1, */\
   { 0x67f0, "low_power_threshold_mode"},    /* Low power threshold mode                          , */\
   { 0x6802, "tdm_source_mapping"},    /* TDM source mapping                                , */\
   { 0x6842, "tdm_sourcea_frame_sel"},    /* Sensed value A                                    , */\
   { 0x6872, "tdm_sourceb_frame_sel"},    /* Sensed value B                                    , */\
   { 0x68a1, "tdm_source0_clip_sel"},    /* Clip flag information with combined clip flag     , */\
   { 0x68e0, "tdm_frame_sync_vld"},    /* TDM lframe decoder synchronization                , */\
   { 0x68f0, "tdm_enable_loopback"},    /* TDM loopback test                                 , */\
   { 0x6902, "tdm_sourcec_frame_sel"},    /* Sensed value C                                    , */\
   { 0x6932, "tdm_sourced_frame_sel"},    /* Sensed value D                                    , */\
   { 0x6962, "tdm_sourcee_frame_sel"},    /* Sensed value E                                    , */\
   { 0x6990, "tdm_sel_vbat"},    /* Select vbat to return to TDM interface            , */\
   { 0x6a07, "low_power_trip_lvl"},    /* Headrom between signal and VBAT to switch to/from low power mode when LPMTM is set to 1. , */\
   { 0x6a84, "low_power_dly"},    /* switching to PST block from minion                , */\
   { 0x6ad2, "low_power_byp_pin_dly"},    /* Delay (1/fs) of the BYP_EN output pin             , */\
   { 0x6b00, "disable_auto_engage"},    /* Disable auto engage                               , */\
   { 0x6b10, "disable_engage"},    /* Disable engage                                    , */\
   { 0x6c60, "dly_bss_rst"},    /* Delay bss reset                                   , */\
   { 0x6c78, "spare_out"},    /* Spare control bits for future use                 , */\
   { 0x6d09, "spare_in"},    /* Spare control bit - read only                     , */\
   { 0x6e00, "flag_idle_power_mode"},    /* Idle power mode                                   , */\
   { 0x6f72, "pwm_clip_lvl"},    /* Clip detect threshold control                     , */\
   { 0x7900, "minion_test_disable"},    /* Testsignal MINION disable the minion even if the loop want to enable it, */\
   { 0x7910, "minion_test_ocd_force"},    /* Testsignal MINION  generate minion ocd flags      , */\
   { 0x7920, "minion_test_vsensep"},    /* Testsignal MINION  observe OUTP signal on ATBP    , */\
   { 0x7930, "minion_test_vsensen"},    /* Testsignal MINION  observe OUTN signal on ATBP    , */\
   { 0x7940, "minion_test_ocp"},    /* Testsignal MINION OCP                             , */\
   { 0x7a00, "minion_ocd_disable"},    /* Disable the OCD functionality of the MINION       , */\
   { 0x7a11, "minion_och_mask"},    /* Programmable OCP HS mask duration after transition, */\
   { 0x7a31, "minion_ocl_mask"},    /* Programmable OCP LS mask duration after transition, */\
   { 0x7a50, "enbl_auto_ocp_minion"},    /* Enable the VBAT dependent selection of minion OCP level, */\
   { 0x7a61, "minion_vbat_ocp"},    /* Programmable minion OCP level (valid  when enbl_auto_ocp_minion is set to 0), */\
   { 0x7b02, "ns_hp2ln_criterion"},    /* Zeroes as threshold to swap from high power to low noise mode, */\
   { 0x7b32, "ns_ln2hp_criterion"},    /* Low power mode detector   ctrl cal_offset from gain module , */\
   { 0x7b65, "low_noise_zero_lvl"},    /* Low noise mode   zero crossing  detection level   , */\
   { 0x7bc1, "sel_lnm_limit_lvl"},    /* Low noise mode gating                             , */\
   { 0x7c05, "low_noise_threshold_lvl"},    /* Low noise mode  amplitude trigger level           , */\
   { 0x7c65, "low_noise_hold_time"},    /* Low noise mode detector   ctrl hold time before low audio is reckoned to be low audio, */\
   { 0x7cc0, "amp_gain_mode"},    /* Music Mode                                        , */\
   { 0x7ce1, "lownoisegain_mode"},    /* Low Noise Mode control when in Music Mode         , */\
   { 0x7e00, "bypass_vbat_gc"},    /* Bypass second order compensation of cursense as a function of Vbat, */\
   { 0x7e10, "sel_vbat_flt"},    /* Select low pass filtered Vbat for second order compensation of cursense as a function of Vbat, */\
   { 0x7e25, "square_a"},    /* Gain compensation quadratic coefficient           , */\
   { 0x7e86, "square_b"},    /* Gain compensation  linear coefficient             , */\
   { 0x7f07, "square_c"},    /* Gain compensation  constant  coefficient          , */\
   { 0x8000, "cvs_bulk_hv_to_vddp"},    /* IITF 16V bulk                                     , */\
   { 0x8010, "cvs_ibias_max"},    /* IITF  bias current                                , */\
   { 0x8020, "cvs_iitf_chop_hs_dis"},    /* IITF  chop high side disable                      , */\
   { 0x8030, "cvs_iitf_chop_ls_dis"},    /* IITF  chop low side disable                       , */\
   { 0x8050, "cs_gain_control"},    /* Current sense gain control                        , */\
   { 0x8060, "cs_bypass_gc"},    /* Bypasses the CS gain correction                   , */\
   { 0x8087, "cs_gain"},    /* Current sense gain                                , */\
   { 0x8305, "cs_ktemp"},    /* Current sense temperature compensation trimming (1 - VALUE*TEMP)*signal, */\
   { 0x8378, "atb_spare"},    /* ATB Spare                                         , */\
   { 0x8401, "volsense_dc_prot_time"},    /* Voltage sense dc speaker protection time          , */\
   { 0x842c, "volsense_dc_prot_level"},    /* Voltage sense dc  speaker protection level        , */\
   { 0x84f0, "enbl_dcprot"},    /* Voltage sense dc speaker protection enable        , */\
   { 0x850c, "volsense_dc_level"},    /* Voltage sense dc level                            , */\
   { 0x8600, "cvs_iitf_chop_clk_en"},    /* IITF chop clock enable                            , */\
   { 0x8610, "cvs_iitf_chop_clk_static"},    /* IITF chop clock static                            , */\
   { 0x8622, "cvs_iitf_chop_clk_ratio"},    /* IITF chop clock Ration                            , */\
   { 0x8790, "enbl_dc_filter"},    /* Control for enabling the DC blocking filter for voltage and current sense, */\
   { 0x87a0, "enbl_ana_pre"},    /* Control for enabling the pre-empasis filter for voltage and current sense decimator, */\
   { 0x87b0, "enbl_dec_rst"},    /* Enble decimator reset in idle power mode          , */\
   { 0x8850, "vs_gain_control"},    /* Voltage sense VS gain control                     , */\
   { 0x8860, "vs_bypass_gc"},    /* Bypasses the VS gain correction                   , */\
   { 0x8887, "vs_gain"},    /* Voltage sense VS gain                             , */\
   { 0xa007, "key1"},    /* 5Ah, 90d To access KEY1_protected registers (default for engineering), */\
   { 0xa107, "key2"},    /* EFUSE KEY2 register                               , */\
   { 0xa200, "key01_locked"},    /* Indicates KEY1 is locked                          , */\
   { 0xa210, "key02_locked"},    /* Indicates KEY2 is locked                          , */\
   { 0xa220, "efuse_all_0"},    /* Indicates shadow register all 0                   , */\
   { 0xa303, "efuse_man_address_in"},    /* EFUSE address from I2C register for read/writing efuse in manual single word mode, */\
   { 0xa340, "man_copy_efuse_to_iic"},    /* Start copying single word from efuse to I2C efuse register, */\
   { 0xa350, "man_copy_iic_to_efuse"},    /* Start copying single word from I2C efuse register to efuse, */\
   { 0xa360, "auto_copy_efuse_to_iic"},    /* Start copying all the data from efuse to I2C efuse registers, */\
   { 0xa370, "auto_copy_iic_to_efuse"},    /* Start copying data from I2C efuse registers to efuse, */\
   { 0xa40f, "efuse_man_data_out"},    /* EFUSE manual read data                            , */\
   { 0xa50f, "efuse_man_data_in"},    /* Write data for EFUSE manual write                 , */\
   { 0xa600, "efuse_vdd_ctrl"},    /* EFUSE AVDD enable                                 , */\
   { 0xa610, "clk_efuse_sel"},    /* Select clk_efuse source((for programming to choose an extranl clock), */\
   { 0xa700, "disable_copy_efuse_to_iic"},    /* Disable efuse copy to i2c register                , */\
   { 0xb010, "bypass_ocpcounter"},    /* Bypass OCP Counter                                , */\
   { 0xb020, "bypass_glitchfilter"},    /* Bypass glitch filter                              , */\
   { 0xb030, "bypass_vbat_ovp"},    /* Bypass VBAT OVP                                   , */\
   { 0xb050, "bypass_otp"},    /* Bypass OTP                                        , */\
   { 0xb060, "bypass_lost_clk"},    /* Bypass lost clock detector                        , */\
   { 0xb070, "ctrl_vpalarm"},    /* Vpalarm (uvp ovp handling)                        , */\
   { 0xb087, "ocp_threshold"},    /* OCP threshold level                               , */\
   { 0xb103, "vbat_uvp_set"},    /* Vbat uvp set                                      , */\
   { 0xb145, "vddp_uvp_set"},    /* Vddp uvp set                                      , */\
   { 0xb1a0, "vddio_uvp_set"},    /* Vddio uvp set                                     , */\
   { 0xbe0f, "sw_profile"},    /* Software profile data                             , */\
   { 0xbf0f, "sw_vstep"},    /* Software vstep information                        , */\
   { 0xc000, "rgu_use_direct_ctrls"},    /* Use Direct control for datapath and cgu reset     , */\
   { 0xc010, "rst_datapath"},    /* Direct control for datapath reset                 , */\
   { 0xc020, "rst_cgu"},    /* Direct control for cgu reset                      , */\
   { 0xc030, "fro_use_direct_ctrls"},    /* Use Direct control for fro oscillator             , */\
   { 0xc040, "pll_use_direct_ctrls"},    /* Use Direct control for PLL                        , */\
   { 0xc050, "amp_use_direct_ctrls"},    /* Use Direct control for amplifier                  , */\
   { 0xc070, "cvs_use_direct_ctrls"},    /* Use Direct control for voltage and current sense  , */\
   { 0xc080, "adc11_use_direct_ctrls"},    /* Direct control for monitoring adc                 , */\
   { 0xc090, "ref_use_direct_ctrls"},    /* Direct control for references                     , */\
   { 0xc0a0, "atb_use_direct_ctrls"},    /* Direct control for analog test bus                , */\
   { 0xc0b0, "qpump_use_direct_ctrls"},    /* Direct control for charge pump                    , */\
   { 0xc0c0, "enbl_qpump_clk"},    /* Enable qpump clock                                , */\
   { 0xc0d0, "enbl_ringo"},    /* Enable the ring oscillator for test purpose       , */\
   { 0xc0e0, "enbl_fro"},    /* Enables FRO8M when fro_use_direct_ctrls set to 1  , */\
   { 0xc100, "enbl_audio_clks"},    /* Enables audio clocks                              , */\
   { 0xc120, "clk_atb_sel"},    /* Used to select the source of clk_atb(for testing) , */\
   { 0xc130, "enbl_efuse_ss"},    /* Sub-system EFUSE clock gate enable                , */\
   { 0xc141, "addr_test"},    /* Addr test                                         , */\
   { 0xc20f, "abist_offset"},    /* Offset control for ABIST testing (two's complement), */\
   { 0xc311, "sourcep"},    /* Set OUTP to                                       , */\
   { 0xc331, "sourcen"},    /* Set OUTN to                                       , */\
   { 0xc350, "invertp"},    /* Invert pwmp test signal                           , */\
   { 0xc360, "invertn"},    /* Invert pwmn test signal                           , */\
   { 0xc376, "pulselength"},    /* Pulse length setting test input for amplifier (PWM clock 2048/4096 Fs), */\
   { 0xc407, "digimuxa_sel"},    /* DigimuxA input selection control routed to DATAO (see Digimux list for details), */\
   { 0xc487, "digimuxb_sel"},    /* DigimuxB input selection control routed to INT (see Digimux list for details), */\
   { 0xc507, "digimuxc_sel"},    /* DigimuxC input selection control routed to ADS1 (see Digimux list for details), */\
   { 0xc601, "int_ds"},    /* INT pad output drive strength                     , */\
   { 0xc621, "bypen_ds"},    /* BYPEN pad output drive strength                   , */\
   { 0xc641, "sda_ds"},    /* SDA strength configutation for SDA                , */\
   { 0xc660, "datao_gpio_mode"},    /* DATAO GPIO mode control.                          , */\
   { 0xc670, "datao_oen"},    /* DATAO output control, only effective in GPIO mode., */\
   { 0xc680, "datao_pu"},    /* DATAO pull-up control, only effective in GPIO mode, */\
   { 0xc690, "datao_pd"},    /* DATAO pull-down control, only effective in GPIO mode, */\
   { 0xc6a0, "datao_out"},    /* DATAO output value, only effective in GPIO mode   , */\
   { 0xc6b0, "datao_ie"},    /* DATAO input control, only effective in GPIO mode  , */\
   { 0xc6c1, "datao_ds"},    /* DATAO pad output drive strength                   , */\
   { 0xc6e1, "int_pupd"},    /* INT pad output drive strength                     , */\
   { 0xc700, "enbl_pll"},    /* Enables PLL when pll_use_direct_ctrls set to 1    , */\
   { 0xc712, "pll_dpll_clkref_div"},    /* DPLL prescaller  reference clock divider  when pll_use_direct_ctrls set to 1, */\
   { 0xc741, "pll_dpll_clkvco_div"},    /* DPLL VCO clock divider  when pll_use_direct_ctrls set to 1, */\
   { 0xc762, "pll_cp_ichg_sel"},    /* PLL charge pump output current  when pll_use_direct_ctrls set to 1, */\
   { 0xc792, "pll_vco_gm_sel"},    /* PLL VCO gain value when pll_use_direct_ctrls set to 1, */\
   { 0xc7c2, "pll_lf_c0_sel"},    /* Loop filter capacitance C0 when pll_use_direct_ctrls set to 1, */\
   { 0xc7f0, "pll_dpll_itrim_bypass"},    /* Bypass the DPLL auto trimming and use pll_dpll_itrim_manual instead, */\
   { 0xc801, "pll_lf_c1_sel"},    /* Loop filter capacitance C1  when pll_use_direct_ctrls set to 1, */\
   { 0xc821, "pll_lf_c2_sel"},    /* Loop filter capacitance C2  when pll_use_direct_ctrls set to 1, */\
   { 0xc842, "pll_lf_r0_sel"},    /* Loop filter resistance R0  when pll_use_direct_ctrls set to 1, */\
   { 0xc872, "pll_lf_r2_sel"},    /* Loop filter resistance R2  when pll_use_direct_ctrls set to 1, */\
   { 0xc900, "pll_lf_ord4_sel"},    /* PLL Filter order selection                        , */\
   { 0xc934, "pll_pdiv"},    /* PLL PDIV when pll_use_direct_ctrls set to 1       , */\
   { 0xc987, "pll_ndiv"},    /* PLL NDIV when pll_use_direct_ctrls set to 1       , */\
   { 0xca0f, "pll_mdiv"},    /* PLL MDIV in PLL when pll_use_direct_ctrls set to 1, */\
   { 0xcb00, "pll_cp_en"},    /* PLL charge pump enable  when pll_use_direct_ctrls set to 1, */\
   { 0xcb10, "pll_vco_en"},    /* PLL VCO enable  when pll_use_direct_ctrls set to 1, */\
   { 0xcb20, "pll_clkout_en"},    /* PLL final clock gate enable                       , */\
   { 0xcb30, "pll_digital_test_en"},    /* PLL digital testing enable                        , */\
   { 0xcb40, "pll_analog_test_en"},    /* PLL analog testing buffer enable                  , */\
   { 0xcb50, "pll_analog_test_buff_bypass"},    /* PLL testing buffer directly output                , */\
   { 0xcb63, "pll_analog_test_signal_sel"},    /* PLL analog test signal selection                  , */\
   { 0xcba1, "pll_clkout_sel"},    /* PLL clock output channel selection                , */\
   { 0xcbc1, "pll_cp_op_bw"},    /* PLL charge pump amplifier bandwidth               , */\
   { 0xcbe1, "pll_cp_op_enhance"},    /* PLL charge pump amplifier output current enhance  , */\
   { 0xcc87, "ana_spare_nokey"},    /* Reseved for analog metal ECO                      , */\
   { 0xcd07, "pll_dpll_itrim_manual"},    /* Valid when bypass the DPLL                        , */\
   { 0xcd87, "ana_spare_key1"},    /* Reseved for analog metal ECO                      , */\
   { 0xce20, "enbl_clk_out_of_range"},    /* Clock out of range checker                        , */\
   { 0xce42, "sel_pll_startup_time"},    /* PLL startup time selection control                , */\
   { 0xce70, "atb_trigger"},    /* Trigger ATB controller, auto-clear                , */\
   { 0xce87, "ana_spare_key2"},    /* Reseved for analog metal ECO                      , */\
   { 0xcf02, "adc11b_td_t"},    /* ADC setup time                                    , */\
   { 0xcf31, "adc11b_chn_sel"},    /* Select the input to convert for ADC11 when adc11_use_direct_ctrls  is set to 1, */\
   { 0xcf64, "adc11b_prog_sample"},    /* ADC11 program sample setting                      , */\
   { 0xcfb0, "adc11b_en"},    /* Enable ADC11 when adc11_use_direct_ctrls  is set to 1, */\
   { 0xd00a, "data_adc11b"},    /* ADC 11 data output data for testing               , */\
   { 0xd0b0, "datao_in"},    /* DATAO input value, only effective in GPIO mode    , */\
   { 0xd100, "bypass_lp_vbat"},    /* Bypass control for Low pass filter in batt sensor , */\
   { 0xd110, "bypass_lp_vddp"},    /* Bypass control for Low pass filter in vddp sensor , */\
   { 0xd120, "bypass_lp_temp"},    /* Bypass the low pass filter inside temperature sensor, */\
   { 0xd200, "source_in_testmode"},    /* TDM source in test mode (return only current and voltage sense), */\
   { 0xd253, "test_spare_out1"},    /* Test spare out 1                                  , */\
   { 0xd292, "sel_dpwm_signal"},    /* Select signal to be tested                        , */\
   { 0xd2c3, "test_spare_out2"},    /* Test spare out 2                                  , */\
   { 0xd300, "atb_reset"},    /* Analog Test Bus reset when atb_use_direct_ctrls  is set to 1, */\
   { 0xd400, "amp_enbl"},    /* Amplifier enable  when amp_use_direct_ctrls is set to 1, */\
   { 0xd500, "cvs_cs_itf_pu"},    /* Current sense interface power up when cvs_use_direct_ctrls is set to 1, */\
   { 0xd510, "cvs_cs_sdm_pu"},    /* Current sense ADC power up when cvs_use_direct_ctrls is set to 1, */\
   { 0xd520, "cvs_vs_itf_pu"},    /* Voltage sense interface power up  when cvs_use_direct_ctrls is set to 1, */\
   { 0xd530, "cvs_vs_sdm_pu"},    /* Voltage sense ADC power up when cvs_use_direct_ctrls is set to 1, */\
   { 0xd540, "cvs_vsitf_cssdm_connect"},    /* Connect vs interface to cs sdm (test)             , */\
   { 0xd550, "cvs_csitf_atb_connect"},    /* Connect cs interface to atb (test)                , */\
   { 0xd560, "cvs_vsitf_atb_connect"},    /* Connect vs interface to atb (test)                , */\
   { 0xd570, "cvs_vs_itf_short"},    /* Short inputs of vs sdm (test)                     , */\
   { 0xd580, "cvs_vstress_polarity"},    /* Change polarity of integrator capacitors during vstress (test), */\
   { 0xd590, "cvs_csls_polarity"},    /* Swap polarity of low-side current sense inputs (test), */\
   { 0xd5a0, "minion_pu"},    /* Power up biasing of minion when amp_use_direct_ctrls is set to 1, */\
   { 0xd5b1, "chn_en_reg_mult"},    /* Cvs channels enable                               , */\
   { 0xd600, "amp_pst_pu"},    /* Power up biasing of AMP powerstage when amp_use_direct_ctrls is set to 1, */\
   { 0xd610, "amp_apwm_pu"},    /* Power up biasing of PWM generator when amp_use_direct_ctrls is set to 1, */\
   { 0xd620, "amp_ciff_pu"},    /* Power up biasing of CIFF integrators when amp_use_direct_ctrls is set to 1, */\
   { 0xd630, "amp_tzdac_pu"},    /* Power up biasing of True-Zero DAC when amp_use_direct_ctrls is set to 1, */\
   { 0xd640, "amp_test_rc"},    /* Testsignal ALF, capacitor-value related current to VATBP, a resitor to VATBN, */\
   { 0xd650, "amp_test_vtriminmax"},    /* Testsignal ALF, connect vtrimax to VATBP and vtrimin to VATBN, */\
   { 0xd660, "amp_test_vlf"},    /* Testsignal ALF, connect vlfp to VATBP and vlfn to VATBN, */\
   { 0xd670, "amp_test_vref"},    /* Testsignal ALF, connect vref_0v9_tzdac to VATBP and vref_0v9 to VATBN, */\
   { 0xd680, "amp_dis_dem"},    /* Disable generation of common-mode-feed-forward (CMFF) signals, */\
   { 0xd6a3, "amp_dtb"},    /* Signals selection of digital testbus              , */\
   { 0xd6e0, "amp_dtb_alf"},    /* Selection of loop filter DTB (never together with amp_dtb_pst!), */\
   { 0xd6f0, "amp_dtb_pst"},    /* Selection of power stage DTB (never together with amp_dtb_alf!), */\
   { 0xd713, "amp_ciff_stress"},    /* Testsignal ALF, CIFF integrator capacitor stress vector, */\
   { 0xd750, "amp_test_bist"},    /* Testsignal PST, enable CVI mode (single segment)  , */\
   { 0xd760, "minion_test"},    /* Testsignal MINION                                 , */\
   { 0xd770, "amp_test_pstn"},    /* Testsignal PST, enable test mode PST n-channel    , */\
   { 0xd780, "amp_test_pstp"},    /* Testsignal PST, enable test mode PST p-channel    , */\
   { 0xd790, "amp_test_vstress"},    /* Testsignal PST, enable Vstress (increase floating bias voltages), */\
   { 0xd7a0, "atb_hv_vddp"},    /* Testsignal PST, connect vddp_sense to vatb_hv     , */\
   { 0xd7b0, "atb_hv_gndp"},    /* Testsignal PST, connect gndp_sense to vatb_hv     , */\
   { 0xd7d0, "amp_test_dis_occlip"},    /* Debug signal ALF, disable clipping of tzdac input currents in case of overcurrent, */\
   { 0xd810, "qpump_pu"},    /* Power up biasing of charge pump qpump_use_direct_ctrls is set to 1, */\
   { 0xd9d0, "qpump_test_vstress"},    /* Enable voltage stress test in Qpump flycap        , */\
   { 0xd9e0, "qpump_test_en"},    /* Enable Qpump test (freeze clocking)               , */\
   { 0xda30, "amp_test_ocl"},    /* Testsignal PST, enable OCP test low-side (single segment), */\
   { 0xda40, "amp_test_och"},    /* Testsignal PST, enable OCP test high-side (single segment), */\
   { 0xdb00, "bgr_pu"},    /* Power up biasing of BandGap Reference when ref_use_direct_ctrls is set to 1, */\
   { 0xdb10, "buf_pu"},    /* Power up biasing of reference voltage buffers when ref_use_direct_ctrls is set to 1, */\
   { 0xdb20, "vsup_pu"},    /* Power up biasing of supply sensor when ref_use_direct_ctrls is set to 1, */\
   { 0xdb30, "bod_pu"},    /* Power up biasing of Brown-Out Detector when ref_use_direct_ctrls is set to 1, */\
   { 0xdb40, "atbp_test1"},    /* Connect atbp to outside world (TEST1)             , */\
   { 0xdb50, "atbn_test2"},    /* Connect atbn to outside world (TEST2)             , */\
   { 0xdb60, "atbp_vref0v9"},    /* Connect bandgap voltage on ATBP(also for trimming), */\
   { 0xdb70, "atbn_gndd"},    /* Connect ground sense on ATBN (close to bandgap)   , */\
   { 0xdb80, "atbp_iref50u"},    /* Connect bias curent  on ATBP(for trim)            , */\
   { 0xdb90, "atbn_vtemp"},    /* Connect t temperature sensor output on ATBN       , */\
   { 0xdba0, "atbp_vddd"},    /* Connect vddd sense  on ATBP (close to bod)        , */\
   { 0xdbb0, "atbn_votp"},    /* Connect analog output otp sensor on ATBN  (can also be forced to test otp flag), */\
   { 0xdbc0, "atbp_pl200m"},    /* Connect all kinds of internal PLL voltages  on ATBP, */\
   { 0xdbd0, "atbn_adc11b"},    /* Connect ADC11 test in/out  on ATBN                , */\
   { 0xdbe0, "atbp_vddpdiv"},    /* Connect divided vddp for VDDP sense on ATBP       , */\
   { 0xdbf0, "atbn_vbatdiv"},    /* Connect divided vbat for VBAT sense on ATBN       , */\
   { 0xdc00, "atbp_vref1v5"},    /* Connect vref for ADC11 on ATBP                    , */\
   { 0xdc10, "atbn_vdda"},    /* Connect vdda sense on ATBN (in references)        , */\
   { 0xdd70, "amp_enable_clip_lpm"},    /* Enable clipping of tzdac input currents in case of Low Power Mode, */\
   { 0xdd80, "amp_enable_clip_pst"},    /* Enable clipping of tzdac input currents in case Main PST is active, */\
   { 0xdd90, "amp_dis_cmfb_lpm"},    /* Disable common-mode feedback in case of Low Power Mode, */\
   { 0xdda0, "amp_dis_cmfb_pst"},    /* Disable common-mode feedback in case Main PST is active, */\
   { 0xf002, "cvs_vs_trim"},    /* Voltage sense trim offset of n-side               , */\
   { 0xf031, "cvs_sdm_offset"},    /* Programmed offset of OTA to push idle tones       , */\
   { 0xf053, "amp_ciff_trim"},    /* Trim capacitors of CIFF integrators               , */\
   { 0xf090, "disable_lpm"},    /* Disable low power mode                            , */\
   { 0xf0a5, "spare_f0_15_10"},    /* SPARE                                             , */\
   { 0xf103, "amp_ochp_trim"},    /* Trim OCP level AMP PST 2's compliment (key1 protected), */\
   { 0xf143, "amp_ochn_trim"},    /* Trim OCP level AMP PST 2's compliment (key1 protected), */\
   { 0xf183, "amp_oclp_trim"},    /* Trim OCP level AMP PST 2's compliment (key1 protected), */\
   { 0xf1c3, "amp_ocln_trim"},    /* Trim OCP level AMP PST 2's compliment (key1 protected), */\
   { 0xf201, "minion_ocl_trim"},    /* Trim OCP level (low side)                         , */\
   { 0xf221, "minion_och_trim"},    /* Trim OCP level (high side)                        , */\
   { 0xf24b, "spare_f2_15_4"},    /* spare                                             , */\
   { 0xf303, "bgr_vtrim"},    /* Trim BGR 900mV reference voltage(2s-complement)   , */\
   { 0xf343, "bgr_itrim"},    /* Trim BGR reference current                        , */\
   { 0xf382, "bgr_tctrim"},    /* Trim BGR reference voltage temperature coefficient, */\
   { 0xf3b1, "type_selection"},    /* Type Selection                                    , */\
   { 0xf407, "calibr_osc_delta_ndiv"},    /* Clk_range_check calibration value (2s-complement) , */\
   { 0xf482, "pll_cp_ib_trim"},    /* Connect to rg_pl200m_cp_ib_trim, pl200m charge pump current bias trim code, */\
   { 0xf4b2, "pll_vco_gm_rs_trim"},    /* Connect to rg_pl200m_vco_gm_rs_trim, pl200m vco gm source resistor of gm selection word, */\
   { 0xf4e0, "lock_bypass_clipper"},    /* Disable function bypass_clipper                   , */\
   { 0xf4f0, "spare_f4_15"},    /* Limit Max DCDC voltage                            , */\
   { 0xf507, "calibr_vout_offset"},    /* DCDC offset calibration 2's complement (key1 protected), */\
   { 0xf587, "temperature_coef_bg"},    /* temperature coefficient of the bandgap            , */\
   { 0xf603, "calibr_gain"},    /* HW gain module (2's complement)                   , */\
   { 0xf645, "calibr_offset"},    /* Offset for amplifier, HW gain module (2's complement), */\
   { 0xf6a5, "adc11_gain_comp"},    /* Adc11b gain compensation setting, compensate factor (2's complement), */\
   { 0xf707, "calibr_cs_gain"},    /* Current sense gain (signed two's complement format), */\
   { 0xf787, "calibr_vs_gain"},    /* Voltage sense VS gain calibration                 , */\
   { 0xf806, "htol_iic_addr"},    /* 7-bit I2C address to be used during HTOL testing  , */\
   { 0xf870, "htol_iic_addr_en"},    /* HTOL I2C address enable control                   , */\
   { 0xf887, "calibr_temp_offset"},    /* Temperature offset 2's compliment (key1 protected), */\
   { 0xf907, "Temperature_coef_temp_sensor"},    /* Temperature coefficient of the temperature sensor , */\
   { 0xf986, "calibr_temp_gain"},    /* Temperature gain 2's compliment (key1 protected)  , */\
   { 0xf9f0, "hot_test_stage_completed"},    /* Report status of hot test stage                   , */\
   { 0xfa0f, "efusedataA"},    /* EFUSEdataA (key1 protected)                       , */\
   { 0xfb0f, "efusedataB"},    /* EFUSEdataB (key1 protected)                       , */\
   { 0xfc0f, "efusedataC"},    /* EFUSEdataC (key1 protected)                       , */\
   { 0xfd0f, "efusedataD"},    /* EFUSEdataD (key1 protected)                       , */\
   { 0xfe0f, "efusedataE"},    /* EFUSEdataE (key1 protected)                       , */\
   { 0xff0f, "efusedataF"},    /* EFUSEdataF (key1 protected)                       , */\
   { 0xffff,"Unknown bitfield enum" }    /* not found */\
};

enum tfd1015_irq {
	tfd1015_irq_stvdds = 0,
	tfd1015_irq_stuvds = 1,
	tfd1015_irq_stotds = 2,
	tfd1015_irq_stocpr = 3,
	tfd1015_irq_stuvvddio = 4,
	tfd1015_irq_sttdmer = 5,
	tfd1015_irq_stnoclk = 6,
	tfd1015_irq_stdcth = 7,
	tfd1015_irq_stbodnok = 8,
	tfd1015_irq_stcoor = 9,
	tfd1015_irq_stovds = 10,
	tfd1015_irq_stqpfail = 11,
	tfd1015_irq_stuvvddp = 12,
	tfd1015_irq_stovvddp = 13,
	tfd1015_irq_max = -1,
	tfd1015_irq_all = -1 /* all irqs */};

#define TFD1015_IRQ_NAMETABLE static tfaIrqName_t tfd1015_irq_names[]= {\
	{0, "STVDDS"},\
	{1, "STUVDS"},\
	{2, "STOTDS"},\
	{3, "STOCPR"},\
	{4, "STUVVDDIO"},\
	{5, "STTDMER"},\
	{6, "STNOCLK"},\
	{7, "STDCTH"},\
	{8, "STBODNOK"},\
	{9, "STCOOR"},\
	{10, "STOVDS"},\
	{11, "STQPFAIL"},\
	{12, "STUVVDDP"},\
	{13, "STOVVDDP"},\
	{14, "14"},\
}

#define TFD1015_IRQ_NAMETABLE_IE_ORDER static tfaIrqName_t tfd1015_irq_names_ie_order[]= {\
	{0, "STVDDS"},\
	{1, "STUVVDDIO"},\
	{2, "STOTDS"},\
	{3, "STOCPR"},\
	{4, "STUVDS"},\
	{5, "STTDMER"},\
	{6, "STNOCLK"},\
	{7, "STDCTH"},\
	{8, "STBODNOK"},\
	{9, "STCOOR"},\
	{10, "STOVDS"},\
	{11, "STQPFAIL"},\
	{12, "STUVVDDP"},\
	{13, "STOVVDDP"},\
	{14, "14"},\
}
#endif /* _TFD1015_TFDFIELDNAMES_H */
