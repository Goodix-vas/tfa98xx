/* 
 * Copyright 2025 GOODIX 
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */
/** Filename: tfa9867_tfafieldnames.h
 *  This file was generated automatically on 06/09/25 at 14:31:53. 
 *  Source file: TFA9867_GPA3_N1B1_I2C_RegisterMap.xlsx
 */

#ifndef _TFA9867_TFAFIELDNAMES_B_H
#define _TFA9867_TFAFIELDNAMES_B_H


#define TFA9867B_I2CVERSION    5

typedef enum tfa9867BBfEnumList {
    TFA9867B_BF_PWDN  = 0x0000,    /*!< Powerdown selection                                */
    TFA9867B_BF_I2CR  = 0x0010,    /*!< I2C reset - auto clear                             */
    TFA9867B_BF_JGLEN = 0x0020,    /*!< JINGLE enable                                      */
    TFA9867B_BF_AMPE  = 0x0030,    /*!< Activate amplifier                                 */
    TFA9867B_BF_DCA   = 0x0040,    /*!< Activate DC-to-DC converter                        */
    TFA9867B_BF_EAMPHZEN= 0x0050,    /*!< Amplifer outputs state when OFF                    */
    TFA9867B_BF_BYPDYUVP= 0x0060,    /*!< Enable dynamic uvp                                 */
    TFA9867B_BF_INTP  = 0x0071,    /*!< Interrupt pin configuration                        */
    TFA9867B_BF_QALARM= 0x0090,    /*!< Device response to Qpump OK flag                   */
    TFA9867B_BF_BYPUVP= 0x00a0,    /*!< Bypass UVP                                         */
    TFA9867B_BF_BYPOCP= 0x00b0,    /*!< Bypass OCP                                         */
    TFA9867B_BF_QPUMPOKEN= 0x00c0,    /*!< Low drive   response to Qpump OK flag              */
    TFA9867B_BF_AMPQOKEN= 0x00d0,    /*!< Low power response to Qpump OK flag                */
    TFA9867B_BF_ENPLLSYNC= 0x00e0,    /*!< Manager control for enabling synchronisation with PLL FS */
    TFA9867B_BF_COORHYS= 0x00f0,    /*!< Select hysteresis for clock range detector         */
    TFA9867B_BF_MANSCONF= 0x0120,    /*!< I2C configured                                     */
    TFA9867B_BF_MUTETO= 0x0160,    /*!< Time out mute sequence                             */
    TFA9867B_BF_MANROBOD= 0x0170,    /*!< Device response to BOD                             */
    TFA9867B_BF_JGLCFG= 0x0181,    /*!< Jingle configuration                               */
    TFA9867B_BF_MANEDCTH= 0x01d0,    /*!< Device response to too high DC level flag (DCTH is 1) */
    TFA9867B_BF_LPCEN = 0x01e0,    /*!< LPC  mode  enable                                  */
    TFA9867B_BF_CSVSENLP= 0x01f0,    /*!< CSVS in Low power mode                             */
    TFA9867B_BF_AUDFS = 0x0203,    /*!< Sample rate (Fs)                                   */
    TFA9867B_BF_FRACTDEL= 0x0256,    /*!< V/I Fractional delay                               */
    TFA9867B_BF_REV   = 0x030f,    /*!< Product                                            */
    TFA9867B_BF_REFCKEXT= 0x0401,    /*!< PLL external ref clock                             */
    TFA9867B_BF_BYTDMGLF= 0x0420,    /*!< Bypass TDM FS/BCK/DATAI giltch filter              */
    TFA9867B_BF_MANAOOSC= 0x0460,    /*!< Internal oscillator control during power down mode */
    TFA9867B_BF_FSSYNCEN= 0x0480,    /*!< Enable FS synchronisation for clock divider        */
    TFA9867B_BF_CLKREFSYNCEN= 0x0490,    /*!< Enable PLL reference clock synchronisation for clock divider */
    TFA9867B_BF_PWMFREQ= 0x04a0,    /*!< PWM output frequency select                        */
    TFA9867B_BF_CGUSYNCDCG= 0x0500,    /*!< Clock gating control for CGU synchronisation module */
    TFA9867B_BF_IPMBYP= 0x0510,    /*!< Bypass ipm synchromizser in DPSA block             */
    TFA9867B_BF_DEVCAT= 0x0607,    /*!< Product category                                   */
    TFA9867B_BF_DEVREV= 0x0687,    /*!< Version                                            */
    TFA9867B_BF_VDDS  = 0x1000,    /*!< POR (sticky flag, clear on write a '1')            */
    TFA9867B_BF_OTDS  = 0x1010,    /*!< OTP alarm (sticky flag,  clear on write a '1')     */
    TFA9867B_BF_UVDS  = 0x1020,    /*!< UVP alarm (sticky flag,  clear on write a '1')     */
    TFA9867B_BF_OVDS  = 0x1030,    /*!< OVP alarm (sticky flag,  clear on write a '1')     */
    TFA9867B_BF_OCDS  = 0x1040,    /*!< OCP amplifier (sticky flag,  clear on write a '1') */
    TFA9867B_BF_NOCLK = 0x1050,    /*!< Lost clock (sticky flag,  clear on write a '1')    */
    TFA9867B_BF_CLKOOR= 0x1060,    /*!< External clock status (sticky flag,  clear on write a '1') */
    TFA9867B_BF_DCOCPOK= 0x1070,    /*!< Booster input current reaching DCMCC (sticky flag,  clear on write a '1') */
    TFA9867B_BF_OCPOMN= 0x1090,    /*!< OCPOK Minion nmos  (sticky flag,  clear on write a '1') */
    TFA9867B_BF_OCPOMP= 0x10a0,    /*!< OCPOK Minion pmos (sticky flag,  clear on write a '1') */
    TFA9867B_BF_OCPOAP= 0x10b0,    /*!< OCPOK High side OUTP (sticky flag,  clear on write a '1') */
    TFA9867B_BF_OCPOAN= 0x10c0,    /*!< OCPOK  High side OUTN (sticky flag,  clear on write a '1') */
    TFA9867B_BF_OCPOBP= 0x10d0,    /*!< OCPOK  Low side OUTP (sticky flag,  clear on write a '1') */
    TFA9867B_BF_OCPOBN= 0x10e0,    /*!< OCPOK Low side OUTN (sticky flag,  clear on write a '1')  */
    TFA9867B_BF_DCTH  = 0x10f0,    /*!< DC level on voltage sense too high (sticky flag,  clear on write a '1') */
    TFA9867B_BF_CLKS  = 0x1100,    /*!< Clocks stable                                      */
    TFA9867B_BF_OTPB  = 0x1110,    /*!< EFUSE busy                                         */
    TFA9867B_BF_TDMERR= 0x1120,    /*!< TDM error                                          */
    TFA9867B_BF_LPMS  = 0x1130,    /*!< Flag in low power mode                             */
    TFA9867B_BF_LNMS  = 0x1140,    /*!< Flag in low noise mode                             */
    TFA9867B_BF_FWRMS = 0x1150,    /*!< Flag in follower mode                              */
    TFA9867B_BF_BSTMS = 0x1160,    /*!< Flag in boost mode                                 */
    TFA9867B_BF_PLLS  = 0x1170,    /*!< PLL lock                                           */
    TFA9867B_BF_TDMLUTER= 0x1180,    /*!< TDM LUT error                                      */
    TFA9867B_BF_SWS   = 0x1190,    /*!< Amplifier engage                                   */
    TFA9867B_BF_AMPS  = 0x11a0,    /*!< Amplifier enable                                   */
    TFA9867B_BF_AREFS = 0x11b0,    /*!< References enable                                  */
    TFA9867B_BF_CLIPS = 0x11c0,    /*!< Amplifier clipping                                 */
    TFA9867B_BF_VGBS  = 0x11e0,    /*!< Vddp greater than vbat                             */
    TFA9867B_BF_FLGBSS= 0x11f0,    /*!< BSS flag                                           */
    TFA9867B_BF_MANSTATE= 0x1203,    /*!< Device manager status                              */
    TFA9867B_BF_AMPSTE= 0x1243,    /*!< Amplifier control status                           */
    TFA9867B_BF_TDMSTAT= 0x1282,    /*!< TDM status bits                                    */
    TFA9867B_BF_QPCLKSTS= 0x12b1,    /*!< QPUMP clock status                                 */
    TFA9867B_BF_WAITSYNC= 0x12d0,    /*!< CGU and PLL synchronisation status flag from CGU   */
    TFA9867B_BF_LDMS  = 0x12e0,    /*!< Flag in Low drive mode                             */
    TFA9867B_BF_GPIOS = 0x12f0,    /*!< Flag gpio status                                   */
    TFA9867B_BF_BODNOK= 0x1300,    /*!< BOD Flag VDD NOT OK (sticky flag,  clear on write a '1') */
    TFA9867B_BF_QPFAIL= 0x1310,    /*!< QPUMP Fail Flag (sticky flag,  clear on write a '1') */
    TFA9867B_BF_JSEQBUSY= 0x1320,    /*!< Sequency busy                                      */
    TFA9867B_BF_BATS  = 0x1509,    /*!< Battery voltage monitoring (V)                     */
    TFA9867B_BF_TEMPS = 0x1608,    /*!< IC Temperature monitoring (C)                      */
    TFA9867B_BF_VDDPS = 0x1709,    /*!< Amplifier supply / booster voltage monitoring (V)  */
    TFA9867B_BF_TDME  = 0x2000,    /*!< Enable interface                                   */
    TFA9867B_BF_AMPINSEL= 0x2011,    /*!< Amplifier input selection                          */
    TFA9867B_BF_INPLEV= 0x2030,    /*!< TDM output attenuation                             */
    TFA9867B_BF_TDMCLINV= 0x2040,    /*!< Reception data to BCK clock                        */
    TFA9867B_BF_TDMFSPOL= 0x2050,    /*!< FS polarity                                        */
    TFA9867B_BF_TDMSLOTS= 0x2061,    /*!< N-slots in Frame                                   */
    TFA9867B_BF_TDMSLLN= 0x2081,    /*!< N-bits in slot                                     */
    TFA9867B_BF_TDMSSIZE= 0x20a1,    /*!< Sample size per slot                               */
    TFA9867B_BF_TDMNBCK= 0x20c3,    /*!< N-BCK's in FS                                      */
    TFA9867B_BF_TDMDEL= 0x2100,    /*!< Data delay to FS                                   */
    TFA9867B_BF_TDMADJ= 0x2110,    /*!< Data adjustment                                    */
    TFA9867B_BF_TDMSPKE= 0x2120,    /*!< Control audio TDM input channel 0                  */
    TFA9867B_BF_TDMDCE= 0x2130,    /*!< Control audio TDM input channel 1                  */
    TFA9867B_BF_TDMSRC0E= 0x2140,    /*!< Control TDM source0 data channel                   */
    TFA9867B_BF_TDMSRC1E= 0x2150,    /*!< Control TDM source1 data channel                   */
    TFA9867B_BF_TDMSRC2E= 0x2160,    /*!< Control TDM source2 data channel                   */
    TFA9867B_BF_TDMSPKS= 0x2183,    /*!< TDM slot for input channel 0                       */
    TFA9867B_BF_TDMDCS= 0x21c3,    /*!< TDM slot for input channel 1                       */
    TFA9867B_BF_TDMSRC0S= 0x2203,    /*!< Slot Position of TDM source0 channel data          */
    TFA9867B_BF_TDMSRC1S= 0x2243,    /*!< Slot Position of TDM source1 channel data          */
    TFA9867B_BF_TDMSRC2S= 0x2283,    /*!< Slot Position of TDM source2 channel data          */
    TFA9867B_BF_ISTVDDS= 0x4000,    /*!< Interrupt status POR                               */
    TFA9867B_BF_ISTBSTOC= 0x4010,    /*!< Interrupt status DCDC OCP alarm                    */
    TFA9867B_BF_ISTOTDS= 0x4020,    /*!< Interrupt status OTP alarm                         */
    TFA9867B_BF_ISTOCPR= 0x4030,    /*!< Interrupt status OCP alarm                         */
    TFA9867B_BF_ISTUVDS= 0x4040,    /*!< Interrupt status UVP alarm                         */
    TFA9867B_BF_ISTTDMER= 0x4050,    /*!< Interrupt status TDM error                         */
    TFA9867B_BF_ISTNOCLK= 0x4060,    /*!< Interrupt status lost clock                        */
    TFA9867B_BF_ISTDCTH= 0x4070,    /*!< Interrupt status dc too high                       */
    TFA9867B_BF_ISTBODNOK= 0x4080,    /*!< Interrupt status brown out detected                */
    TFA9867B_BF_ISTCOOR= 0x4090,    /*!< Interrupt status clock out of range                */
    TFA9867B_BF_ISTOVDS= 0x40a0,    /*!< Interrupt status OVP alarm                         */
    TFA9867B_BF_ISTQPFAIL= 0x40b0,    /*!< Interrupt status qpump failure                     */
    TFA9867B_BF_ICLVDDS= 0x4400,    /*!< Clear interrupt status POR                         */
    TFA9867B_BF_ICLBSTOC= 0x4410,    /*!< Clear interrupt status DCDC OCP                    */
    TFA9867B_BF_ICLOTDS= 0x4420,    /*!< Clear interrupt status OTP alarm                   */
    TFA9867B_BF_ICLOCPR= 0x4430,    /*!< Clear interrupt status OCP alarm                   */
    TFA9867B_BF_ICLUVDS= 0x4440,    /*!< Clear interrupt status UVP alarm                   */
    TFA9867B_BF_ICLTDMER= 0x4450,    /*!< Clear interrupt status TDM error                   */
    TFA9867B_BF_ICLNOCLK= 0x4460,    /*!< Clear interrupt status lost clk                    */
    TFA9867B_BF_ICLDCTH= 0x4470,    /*!< Clear interrupt status dc too high                 */
    TFA9867B_BF_ICLBODNOK= 0x4480,    /*!< Clear interrupt status brown out detected          */
    TFA9867B_BF_ICLCOOR= 0x4490,    /*!< Clear interrupt status clock out of range          */
    TFA9867B_BF_ICLOVDS= 0x44a0,    /*!< Clear interrupt status OVP alarm                   */
    TFA9867B_BF_ICLQPFAIL= 0x44b0,    /*!< Clear interrupt status qpump failure               */
    TFA9867B_BF_IEVDDS= 0x4800,    /*!< Enable interrupt POR                               */
    TFA9867B_BF_IEBSTOC= 0x4810,    /*!< Enable interrupt DCDC OCP                          */
    TFA9867B_BF_IEOTDS= 0x4820,    /*!< Enable interrupt OTP alarm                         */
    TFA9867B_BF_IEOCPR= 0x4830,    /*!< Enable interrupt OCP alarm                         */
    TFA9867B_BF_IEUVDS= 0x4840,    /*!< Enable interrupt UVP alarm                         */
    TFA9867B_BF_IETDMER= 0x4850,    /*!< Enable interrupt TDM error                         */
    TFA9867B_BF_IENOCLK= 0x4860,    /*!< Enable interrupt lost clk                          */
    TFA9867B_BF_IEDCTH= 0x4870,    /*!< Enable interrupt dc too high                       */
    TFA9867B_BF_IEBODNOK= 0x4880,    /*!< Enable interrupt brown out detect                  */
    TFA9867B_BF_IECOOR= 0x4890,    /*!< Enable interrupt clock out of range                */
    TFA9867B_BF_IEOVDS= 0x48a0,    /*!< Enable interrupt OVP alarm                         */
    TFA9867B_BF_IEQPFAIL= 0x48b0,    /*!< Enable interrupt qpump failure                     */
    TFA9867B_BF_IPOVDDS= 0x4c00,    /*!< Interrupt polarity POR                             */
    TFA9867B_BF_IPOBSTOC= 0x4c10,    /*!< Interrupt polarity DCDC OCP                        */
    TFA9867B_BF_IPOOTDS= 0x4c20,    /*!< Interrupt polarity OTP alarm                       */
    TFA9867B_BF_IPOOCPR= 0x4c30,    /*!< Interrupt polarity OCP alarm                       */
    TFA9867B_BF_IPOUVDS= 0x4c40,    /*!< Interrupt polarity UVP alarm                       */
    TFA9867B_BF_IPOTDMER= 0x4c50,    /*!< Interrupt polarity TDM error                       */
    TFA9867B_BF_IPONOCLK= 0x4c60,    /*!< Interrupt polarity lost clk                        */
    TFA9867B_BF_IPODCTH= 0x4c70,    /*!< Interrupt polarity dc too high                     */
    TFA9867B_BF_IPOBODNOK= 0x4c80,    /*!< Interrupt polarity brown out detect                */
    TFA9867B_BF_IPOCOOR= 0x4c90,    /*!< Interrupt polarity clock out of range              */
    TFA9867B_BF_IPOOVDS= 0x4ca0,    /*!< Interrupt polarity OVP alarm                       */
    TFA9867B_BF_IPOQPFAIL= 0x4cb0,    /*!< Interrupt polarity qpump failure                   */
    TFA9867B_BF_BSSCLRST= 0x50d0,    /*!< Reset clipper  auto-clear                          */
    TFA9867B_BF_BSSR  = 0x50e0,    /*!< Battery voltage read out in BATS bitfield          */
    TFA9867B_BF_BSSBY = 0x50f0,    /*!< Bypass battery safeguard                           */
    TFA9867B_BF_USOUND= 0x5130,    /*!< Ultrasound mode                                    */
    TFA9867B_BF_DCDITH= 0x5140,    /*!< DC dithering selection                             */
    TFA9867B_BF_HPFBYP= 0x5150,    /*!< Bypass HPF                                         */
    TFA9867B_BF_PWMPH = 0x5203,    /*!< Select pwm phase wrt TDM_FS signal                 */
    TFA9867B_BF_AMPGAIN= 0x5257,    /*!< Amplifier gain                                     */
    TFA9867B_BF_BYPDLYLINE= 0x52f0,    /*!< Bypass the interpolator delay line                 */
    TFA9867B_BF_AMPSLP= 0x5481,    /*!< Extreme amplifier slope control                    */
    TFA9867B_BF_BSTSLP= 0x54a1,    /*!< Booster slope control                              */
    TFA9867B_BF_BSSMVBS= 0x5a00,    /*!< Min_vbat source select                             */
    TFA9867B_BF_DCMCC = 0x5a13,    /*!< Battery current limiter initial value              */
    TFA9867B_BF_BSST  = 0x5a53,    /*!< BSS threshold Vbat value (reducing gain)           */
    TFA9867B_BF_BSSAR = 0x5a91,    /*!< BSS attack rate (reducing gain)                    */
    TFA9867B_BF_BSSRR = 0x5ab3,    /*!< BSS release rate  (reducing gain)                  */
    TFA9867B_BF_BSSMULT= 0x5af0,    /*!< Multiply attack rate by 8                          */
    TFA9867B_BF_BSSHT = 0x5b03,    /*!< BSS hold time (reducing gain)                      */
    TFA9867B_BF_BSSS  = 0x5b41,    /*!< BSS steepness (reducing gain)                      */
    TFA9867B_BF_BSSRL = 0x5b62,    /*!< BSS allowed reduction level (reducing gain)        */
    TFA9867B_BF_BSSDCT= 0x5b93,    /*!< BSS threshold Vbat value (reducing DCMCC)          */
    TFA9867B_BF_BSSDCAR= 0x5bd1,    /*!< BSS attack rate  (reducing DCMCC)                  */
    TFA9867B_BF_DUALCELL= 0x5bf0,    /*!< Single or dual cell Battery                        */
    TFA9867B_BF_BSSDCRR= 0x5c03,    /*!< BSS release rate  (reducing DCMCC)                 */
    TFA9867B_BF_BSSDCHT= 0x5c43,    /*!< BSS hold time (reducing DCMCC)                     */
    TFA9867B_BF_BSSDCS= 0x5c81,    /*!< Battery supply safeguard steepness (reducing DCMCC) */
    TFA9867B_BF_BSSDCRL= 0x5ca2,    /*!< BSS allowed reduction level (reducing DCMCC)       */
    TFA9867B_BF_DCLIPFLS= 0x5cd1,    /*!< Select source for BSS flag                         */
    TFA9867B_BF_BSSBYDB= 0x5cf0,    /*!< Bypass the effect of BSS on boost voltage          */
    TFA9867B_BF_OVDEFF= 0x5d05,    /*!< Overdrive. Efficiency of the class D amplifier     */
    TFA9867B_BF_OVDRL = 0x5d66,    /*!< Overdrive. Load resistance                         */
    TFA9867B_BF_OVDGP = 0x5e05,    /*!< Overdrive. Proportional gain parameter to determine the amount of overboosting */
    TFA9867B_BF_TDMSPKG= 0x5f54,    /*!< TDM signal attenuation                             */
    TFA9867B_BF_IPM   = 0x60e1,    /*!< Idle power mode control                            */
    TFA9867B_BF_LDMSEG= 0x62b2,    /*!< Amplifier low drive   mode                         */
    TFA9867B_BF_LDM   = 0x63c1,    /*!< Low drive mode detector control                    */
    TFA9867B_BF_RCVM  = 0x63e1,    /*!< Handset/Receiver mode                              */
    TFA9867B_BF_VBATHOLD= 0x6555,    /*!< Select hold time for VBAT(min/max)                 */
    TFA9867B_BF_VBATMAX= 0x65b0,    /*!< Select between vbat minimum or maximum for Chip Sense output on TDM  VBAT(min/max) */
    TFA9867B_BF_LPM   = 0x66e1,    /*!< Low power mode control                             */
    TFA9867B_BF_LPMTH = 0x6705,    /*!< Low power mode  amplitude trigger level            */
    TFA9867B_BF_TDMSRCMAP= 0x6802,    /*!< TDM source mapping                                 */
    TFA9867B_BF_TDMSRCAS= 0x6842,    /*!< Sensed value A                                     */
    TFA9867B_BF_TDMSRCBS= 0x6872,    /*!< Sensed value B                                     */
    TFA9867B_BF_TDMSRCACLIP= 0x68a1,    /*!< Clip flag information with combined clip flag      */
    TFA9867B_BF_TDMSRCCS= 0x6902,    /*!< Sensed value C                                     */
    TFA9867B_BF_TDMSRCDS= 0x6932,    /*!< Sensed value D                                     */
    TFA9867B_BF_TDMSRCES= 0x6962,    /*!< Sensed value E                                     */
    TFA9867B_BF_TDMVBAT= 0x6990,    /*!< Select vbat to return to TDM interface             */
    TFA9867B_BF_IPMS  = 0x6e00,    /*!< Idle power mode                                    */
    TFA9867B_BF_LVLCLPPWM= 0x6f72,    /*!< Clip detect threshold control                      */
    TFA9867B_BF_DCIE  = 0x7060,    /*!< Adaptive boost mode                                */
    TFA9867B_BF_DCNS  = 0x7400,    /*!< Disable control of noise shaper in DCDC control    */
    TFA9867B_BF_DCNSRST= 0x7410,    /*!< Disable control of reset of noise shaper when 8 bit value for dcdc control occurs */
    TFA9867B_BF_DCOFFSET= 0x7424,    /*!< Boost headroom  Offset                             */
    TFA9867B_BF_DCHOLD= 0x7494,    /*!< Hold time for booster                              */
    TFA9867B_BF_DCINT = 0x74e0,    /*!< Selection of data for adaptive boost algorithm, effective only when DCIE is set to 1 */
    TFA9867B_BF_DCTRIP= 0x7509,    /*!< 1st Adaptive boost trip level, effective only when DCIE is set to 1 */
    TFA9867B_BF_DCTRIPT= 0x75a4,    /*!< Booster headroom gain, increasing headroom when signal amplitude increase */
    TFA9867B_BF_BYPDCLPF= 0x75f0,    /*!< Bypass control of DCDC control low pass filter for quantization noise suppression */
    TFA9867B_BF_DCVOS = 0x7687,    /*!< Maximum boost voltage                              */
    TFA9867B_BF_LNMTH = 0x7c05,    /*!< Low noise mode  amplitude trigger level            */
    TFA9867B_BF_MUSMODE= 0x7cc0,    /*!< Music Mode                                         */
    TFA9867B_BF_LNM   = 0x7ce1,    /*!< Low Noise Mode control when in Music Mode          */
    TFA9867B_BF_DCPTC = 0x8401,    /*!< Voltage sense dc speaker protection time           */
    TFA9867B_BF_DCPL  = 0x842c,    /*!< Voltage sense dc speaker protection level          */
    TFA9867B_BF_DCPROT= 0x84f0,    /*!< Voltage sense dc speaker protection enable         */
    TFA9867B_BF_EFUSEK= 0xa107,    /*!< EFUSE KEY2 register                                */
    TFA9867B_BF_KEY1LOCKED= 0xa200,    /*!< Indicates KEY1 is locked                           */
    TFA9867B_BF_KEY2LOCKED= 0xa210,    /*!< Indicates KEY2 is locked                           */
    TFA9867B_BF_UVPSET= 0xb103,    /*!< Uvp set                                            */
    TFA9867B_BF_SWPROFIL= 0xbe0f,    /*!< Software profile data                              */
    TFA9867B_BF_SWVSTEP= 0xbf0f,    /*!< Software vstep information                         */
    TFA9867B_BF_PLLPDIV= 0xc934,    /*!< PLL PDIV when pll_use_direct_ctrls set to 1        */
    TFA9867B_BF_PLLNDIV= 0xc987,    /*!< PLL NDIV when pll_use_direct_ctrls set to 1        */
    TFA9867B_BF_PLLMDIV= 0xca0f,    /*!< PLL MDIV in PLL when pll_use_direct_ctrls set to 1 */
    TFA9867B_BF_DCDIS = 0xce30,    /*!< DCDC on/off                                        */
    TFA9867B_BF_PLLSTRTM= 0xce42,    /*!< PLL startup time selection control                 */
    TFA9867B_BF_ADC11GAIN= 0xf6a5,    /*!< Adc11b gain compensation setting, compensate factor (2's complement) */
} tfa9867BBfEnumList_t;
#define TFA9867B_NAMETABLE static tfaBfName_t Tfa9867BDatasheetNames[]= {\
   { 0x0, "PWDN"},    /* Powerdown selection                               , */\
   { 0x10, "I2CR"},    /* I2C reset - auto clear                            , */\
   { 0x20, "JGLEN"},    /* JINGLE enable                                     , */\
   { 0x30, "AMPE"},    /* Activate amplifier                                , */\
   { 0x40, "DCA"},    /* Activate DC-to-DC converter                       , */\
   { 0x50, "EAMPHZEN"},    /* Amplifer outputs state when OFF                   , */\
   { 0x60, "BYPDYUVP"},    /* Enable dynamic uvp                                , */\
   { 0x71, "INTP"},    /* Interrupt pin configuration                       , */\
   { 0x90, "QALARM"},    /* Device response to Qpump OK flag                  , */\
   { 0xa0, "BYPUVP"},    /* Bypass UVP                                        , */\
   { 0xb0, "BYPOCP"},    /* Bypass OCP                                        , */\
   { 0xc0, "QPUMPOKEN"},    /* Low drive   response to Qpump OK flag             , */\
   { 0xd0, "AMPQOKEN"},    /* Low power response to Qpump OK flag               , */\
   { 0xe0, "ENPLLSYNC"},    /* Manager control for enabling synchronisation with PLL FS, */\
   { 0xf0, "COORHYS"},    /* Select hysteresis for clock range detector        , */\
   { 0x120, "MANSCONF"},    /* I2C configured                                    , */\
   { 0x160, "MUTETO"},    /* Time out mute sequence                            , */\
   { 0x170, "MANROBOD"},    /* Device response to BOD                            , */\
   { 0x181, "JGLCFG"},    /* Jingle configuration                              , */\
   { 0x1d0, "MANEDCTH"},    /* Device response to too high DC level flag (DCTH is 1), */\
   { 0x1e0, "LPCEN"},    /* LPC  mode  enable                                 , */\
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
   { 0x1030, "OVDS"},    /* OVP alarm (sticky flag,  clear on write a '1')    , */\
   { 0x1040, "OCDS"},    /* OCP amplifier (sticky flag,  clear on write a '1'), */\
   { 0x1050, "NOCLK"},    /* Lost clock (sticky flag,  clear on write a '1')   , */\
   { 0x1060, "CLKOOR"},    /* External clock status (sticky flag,  clear on write a '1'), */\
   { 0x1070, "DCOCPOK"},    /* Booster input current reaching DCMCC (sticky flag,  clear on write a '1'), */\
   { 0x1090, "OCPOMN"},    /* OCPOK Minion nmos  (sticky flag,  clear on write a '1'), */\
   { 0x10a0, "OCPOMP"},    /* OCPOK Minion pmos (sticky flag,  clear on write a '1'), */\
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
   { 0x1150, "FWRMS"},    /* Flag in follower mode                             , */\
   { 0x1160, "BSTMS"},    /* Flag in boost mode                                , */\
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
   { 0x12f0, "GPIOS"},    /* Flag gpio status                                  , */\
   { 0x1300, "BODNOK"},    /* BOD Flag VDD NOT OK (sticky flag,  clear on write a '1'), */\
   { 0x1310, "QPFAIL"},    /* QPUMP Fail Flag (sticky flag,  clear on write a '1'), */\
   { 0x1320, "JSEQBUSY"},    /* Sequency busy                                     , */\
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
   { 0x4010, "ISTBSTOC"},    /* Interrupt status DCDC OCP alarm                   , */\
   { 0x4020, "ISTOTDS"},    /* Interrupt status OTP alarm                        , */\
   { 0x4030, "ISTOCPR"},    /* Interrupt status OCP alarm                        , */\
   { 0x4040, "ISTUVDS"},    /* Interrupt status UVP alarm                        , */\
   { 0x4050, "ISTTDMER"},    /* Interrupt status TDM error                        , */\
   { 0x4060, "ISTNOCLK"},    /* Interrupt status lost clock                       , */\
   { 0x4070, "ISTDCTH"},    /* Interrupt status dc too high                      , */\
   { 0x4080, "ISTBODNOK"},    /* Interrupt status brown out detected               , */\
   { 0x4090, "ISTCOOR"},    /* Interrupt status clock out of range               , */\
   { 0x40a0, "ISTOVDS"},    /* Interrupt status OVP alarm                        , */\
   { 0x40b0, "ISTQPFAIL"},    /* Interrupt status qpump failure                    , */\
   { 0x4400, "ICLVDDS"},    /* Clear interrupt status POR                        , */\
   { 0x4410, "ICLBSTOC"},    /* Clear interrupt status DCDC OCP                   , */\
   { 0x4420, "ICLOTDS"},    /* Clear interrupt status OTP alarm                  , */\
   { 0x4430, "ICLOCPR"},    /* Clear interrupt status OCP alarm                  , */\
   { 0x4440, "ICLUVDS"},    /* Clear interrupt status UVP alarm                  , */\
   { 0x4450, "ICLTDMER"},    /* Clear interrupt status TDM error                  , */\
   { 0x4460, "ICLNOCLK"},    /* Clear interrupt status lost clk                   , */\
   { 0x4470, "ICLDCTH"},    /* Clear interrupt status dc too high                , */\
   { 0x4480, "ICLBODNOK"},    /* Clear interrupt status brown out detected         , */\
   { 0x4490, "ICLCOOR"},    /* Clear interrupt status clock out of range         , */\
   { 0x44a0, "ICLOVDS"},    /* Clear interrupt status OVP alarm                  , */\
   { 0x44b0, "ICLQPFAIL"},    /* Clear interrupt status qpump failure              , */\
   { 0x4800, "IEVDDS"},    /* Enable interrupt POR                              , */\
   { 0x4810, "IEBSTOC"},    /* Enable interrupt DCDC OCP                         , */\
   { 0x4820, "IEOTDS"},    /* Enable interrupt OTP alarm                        , */\
   { 0x4830, "IEOCPR"},    /* Enable interrupt OCP alarm                        , */\
   { 0x4840, "IEUVDS"},    /* Enable interrupt UVP alarm                        , */\
   { 0x4850, "IETDMER"},    /* Enable interrupt TDM error                        , */\
   { 0x4860, "IENOCLK"},    /* Enable interrupt lost clk                         , */\
   { 0x4870, "IEDCTH"},    /* Enable interrupt dc too high                      , */\
   { 0x4880, "IEBODNOK"},    /* Enable interrupt brown out detect                 , */\
   { 0x4890, "IECOOR"},    /* Enable interrupt clock out of range               , */\
   { 0x48a0, "IEOVDS"},    /* Enable interrupt OVP alarm                        , */\
   { 0x48b0, "IEQPFAIL"},    /* Enable interrupt qpump failure                    , */\
   { 0x4c00, "IPOVDDS"},    /* Interrupt polarity POR                            , */\
   { 0x4c10, "IPOBSTOC"},    /* Interrupt polarity DCDC OCP                       , */\
   { 0x4c20, "IPOOTDS"},    /* Interrupt polarity OTP alarm                      , */\
   { 0x4c30, "IPOOCPR"},    /* Interrupt polarity OCP alarm                      , */\
   { 0x4c40, "IPOUVDS"},    /* Interrupt polarity UVP alarm                      , */\
   { 0x4c50, "IPOTDMER"},    /* Interrupt polarity TDM error                      , */\
   { 0x4c60, "IPONOCLK"},    /* Interrupt polarity lost clk                       , */\
   { 0x4c70, "IPODCTH"},    /* Interrupt polarity dc too high                    , */\
   { 0x4c80, "IPOBODNOK"},    /* Interrupt polarity brown out detect               , */\
   { 0x4c90, "IPOCOOR"},    /* Interrupt polarity clock out of range             , */\
   { 0x4ca0, "IPOOVDS"},    /* Interrupt polarity OVP alarm                      , */\
   { 0x4cb0, "IPOQPFAIL"},    /* Interrupt polarity qpump failure                  , */\
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
   { 0x54a1, "BSTSLP"},    /* Booster slope control                             , */\
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
   { 0x5bf0, "DUALCELL"},    /* Single or dual cell Battery                       , */\
   { 0x5c03, "BSSDCRR"},    /* BSS release rate  (reducing DCMCC)                , */\
   { 0x5c43, "BSSDCHT"},    /* BSS hold time (reducing DCMCC)                    , */\
   { 0x5c81, "BSSDCS"},    /* Battery supply safeguard steepness (reducing DCMCC), */\
   { 0x5ca2, "BSSDCRL"},    /* BSS allowed reduction level (reducing DCMCC)      , */\
   { 0x5cd1, "DCLIPFLS"},    /* Select source for BSS flag                        , */\
   { 0x5cf0, "BSSBYDB"},    /* Bypass the effect of BSS on boost voltage         , */\
   { 0x5d05, "OVDEFF"},    /* Overdrive. Efficiency of the class D amplifier    , */\
   { 0x5d66, "OVDRL"},    /* Overdrive. Load resistance                        , */\
   { 0x5e05, "OVDGP"},    /* Overdrive. Proportional gain parameter to determine the amount of overboosting, */\
   { 0x5f54, "TDMSPKG"},    /* TDM signal attenuation                            , */\
   { 0x60e1, "IPM"},    /* Idle power mode control                           , */\
   { 0x62b2, "LDMSEG"},    /* Amplifier low drive   mode                        , */\
   { 0x63c1, "LDM"},    /* Low drive mode detector control                   , */\
   { 0x63e1, "RCVM"},    /* Handset/Receiver mode                             , */\
   { 0x6555, "VBATHOLD"},    /* Select hold time for VBAT(min/max)                , */\
   { 0x65b0, "VBATMAX"},    /* Select between vbat minimum or maximum for Chip Sense output on TDM  VBAT(min/max), */\
   { 0x66e1, "LPM"},    /* Low power mode control                            , */\
   { 0x6705, "LPMTH"},    /* Low power mode  amplitude trigger level           , */\
   { 0x6802, "TDMSRCMAP"},    /* TDM source mapping                                , */\
   { 0x6842, "TDMSRCAS"},    /* Sensed value A                                    , */\
   { 0x6872, "TDMSRCBS"},    /* Sensed value B                                    , */\
   { 0x68a1, "TDMSRCACLIP"},    /* Clip flag information with combined clip flag     , */\
   { 0x6902, "TDMSRCCS"},    /* Sensed value C                                    , */\
   { 0x6932, "TDMSRCDS"},    /* Sensed value D                                    , */\
   { 0x6962, "TDMSRCES"},    /* Sensed value E                                    , */\
   { 0x6990, "TDMVBAT"},    /* Select vbat to return to TDM interface            , */\
   { 0x6e00, "IPMS"},    /* Idle power mode                                   , */\
   { 0x6f72, "LVLCLPPWM"},    /* Clip detect threshold control                     , */\
   { 0x7060, "DCIE"},    /* Adaptive boost mode                               , */\
   { 0x7400, "DCNS"},    /* Disable control of noise shaper in DCDC control   , */\
   { 0x7410, "DCNSRST"},    /* Disable control of reset of noise shaper when 8 bit value for dcdc control occurs, */\
   { 0x7424, "DCOFFSET"},    /* Boost headroom  Offset                            , */\
   { 0x7494, "DCHOLD"},    /* Hold time for booster                             , */\
   { 0x74e0, "DCINT"},    /* Selection of data for adaptive boost algorithm, effective only when DCIE is set to 1, */\
   { 0x7509, "DCTRIP"},    /* 1st Adaptive boost trip level, effective only when DCIE is set to 1, */\
   { 0x75a4, "DCTRIPT"},    /* Booster headroom gain, increasing headroom when signal amplitude increase, */\
   { 0x75f0, "BYPDCLPF"},    /* Bypass control of DCDC control low pass filter for quantization noise suppression, */\
   { 0x7687, "DCVOS"},    /* Maximum boost voltage                             , */\
   { 0x7c05, "LNMTH"},    /* Low noise mode  amplitude trigger level           , */\
   { 0x7cc0, "MUSMODE"},    /* Music Mode                                        , */\
   { 0x7ce1, "LNM"},    /* Low Noise Mode control when in Music Mode         , */\
   { 0x8401, "DCPTC"},    /* Voltage sense dc speaker protection time          , */\
   { 0x842c, "DCPL"},    /* Voltage sense dc speaker protection level         , */\
   { 0x84f0, "DCPROT"},    /* Voltage sense dc speaker protection enable        , */\
   { 0xa107, "EFUSEK"},    /* EFUSE KEY2 register                               , */\
   { 0xa200, "KEY1LOCKED"},    /* Indicates KEY1 is locked                          , */\
   { 0xa210, "KEY2LOCKED"},    /* Indicates KEY2 is locked                          , */\
   { 0xb103, "UVPSET"},    /* Uvp set                                           , */\
   { 0xbe0f, "SWPROFIL"},    /* Software profile data                             , */\
   { 0xbf0f, "SWVSTEP"},    /* Software vstep information                        , */\
   { 0xc934, "PLLPDIV"},    /* PLL PDIV when pll_use_direct_ctrls set to 1       , */\
   { 0xc987, "PLLNDIV"},    /* PLL NDIV when pll_use_direct_ctrls set to 1       , */\
   { 0xca0f, "PLLMDIV"},    /* PLL MDIV in PLL when pll_use_direct_ctrls set to 1, */\
   { 0xce30, "DCDIS"},    /* DCDC on/off                                       , */\
   { 0xce42, "PLLSTRTM"},    /* PLL startup time selection control                , */\
   { 0xf6a5, "ADC11GAIN"},    /* Adc11b gain compensation setting, compensate factor (2's complement), */\
   { 0xffff,"Unknown bitfield enum" }   /* not found */\
};

#define TFA9867B_BITNAMETABLE static tfaBfName_t Tfa9867BBitNames[]= {\
   { 0x0, "powerdown"},    /* Powerdown selection                               , */\
   { 0x10, "reset"},    /* I2C reset - auto clear                            , */\
   { 0x20, "jingle_enbl"},    /* JINGLE enable                                     , */\
   { 0x30, "enbl_amplifier"},    /* Activate amplifier                                , */\
   { 0x40, "enbl_boost"},    /* Activate DC-to-DC converter                       , */\
   { 0x50, "enbl_amp_hiz"},    /* Amplifer outputs state when OFF                   , */\
   { 0x60, "enable_dynamic_uvp"},    /* Enable dynamic uvp                                , */\
   { 0x71, "int_pad_io"},    /* Interrupt pin configuration                       , */\
   { 0x90, "man_enbl_qpump_ok"},    /* Device response to Qpump OK flag                  , */\
   { 0xa0, "bypass_uvp"},    /* Bypass UVP                                        , */\
   { 0xb0, "bypass_ocp"},    /* Bypass OCP                                        , */\
   { 0xc0, "enbl_dpsa_qpump_ok"},    /* Low drive   response to Qpump OK flag             , */\
   { 0xd0, "enbl_amp_qpump_ok"},    /* Low power response to Qpump OK flag               , */\
   { 0xe0, "enbl_pll_synchronisation"},    /* Manager control for enabling synchronisation with PLL FS, */\
   { 0xf0, "sel_hysteresis"},    /* Select hysteresis for clock range detector        , */\
   { 0x120, "src_set_configured"},    /* I2C configured                                    , */\
   { 0x160, "disable_mute_time_out"},    /* Time out mute sequence                            , */\
   { 0x170, "man_enbl_brown"},    /* Device response to BOD                            , */\
   { 0x181, "jingle_cfg"},    /* Jingle configuration                              , */\
   { 0x1d0, "man_enbl_dc_too_high"},    /* Device response to too high DC level flag (DCTH is 1), */\
   { 0x1e0, "lpc_enbl"},    /* LPC  mode  enable                                 , */\
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
   { 0x607, "category"},    /* Product category                                  , */\
   { 0x687, "version"},    /* Version                                           , */\
   { 0x802, "ctrl_on2off_criterion"},    /* Amplifier on-off criteria for shutdown            , */\
   { 0x834, "cmff_ctrl_nskip"},    /* Skip or shorten CMFF pulses in 4096fs cycles to create headroom at the bottom , */\
   { 0x883, "cmff_ctrl_nclipmax"},    /* Limit lenght CMFF pulses to remove the above headroom in case of clipping at the top vddp is 15V, */\
   { 0xf0f, "hidden_code"},    /* Hidden code to enable access to key registers     , */\
   { 0x1000, "flag_por"},    /* POR (sticky flag, clear on write a '1')           , */\
   { 0x1010, "flag_otpok"},    /* OTP alarm (sticky flag,  clear on write a '1')    , */\
   { 0x1020, "flag_uvpok"},    /* UVP alarm (sticky flag,  clear on write a '1')    , */\
   { 0x1030, "flag_ovpok"},    /* OVP alarm (sticky flag,  clear on write a '1')    , */\
   { 0x1040, "flag_ocp_alarm"},    /* OCP amplifier (sticky flag,  clear on write a '1'), */\
   { 0x1050, "flag_lost_clk"},    /* Lost clock (sticky flag,  clear on write a '1')   , */\
   { 0x1060, "flag_clk_out_of_range"},    /* External clock status (sticky flag,  clear on write a '1'), */\
   { 0x1070, "flag_bst_ocpok"},    /* Booster input current reaching DCMCC (sticky flag,  clear on write a '1'), */\
   { 0x1090, "flag_minionocpokn"},    /* OCPOK Minion nmos  (sticky flag,  clear on write a '1'), */\
   { 0x10a0, "flag_minionocpokp"},    /* OCPOK Minion pmos (sticky flag,  clear on write a '1'), */\
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
   { 0x1150, "flag_follower_mode"},    /* Flag in follower mode                             , */\
   { 0x1160, "flag_boost_mode"},    /* Flag in boost mode                                , */\
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
   { 0x12f0, "flag_gpio_status"},    /* Flag gpio status                                  , */\
   { 0x1300, "flag_bod_vddd_nok"},    /* BOD Flag VDD NOT OK (sticky flag,  clear on write a '1'), */\
   { 0x1310, "flag_qpump_fail"},    /* QPUMP Fail Flag (sticky flag,  clear on write a '1'), */\
   { 0x1320, "flag_jseq_busy"},    /* Sequency busy                                     , */\
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
   { 0x4010, "int_out_flag_bst_ocpok"},    /* Interrupt status DCDC OCP alarm                   , */\
   { 0x4020, "int_out_flag_otpok"},    /* Interrupt status OTP alarm                        , */\
   { 0x4030, "int_out_flag_ocp_alarm"},    /* Interrupt status OCP alarm                        , */\
   { 0x4040, "int_out_flag_uvpok"},    /* Interrupt status UVP alarm                        , */\
   { 0x4050, "int_out_flag_tdm_error"},    /* Interrupt status TDM error                        , */\
   { 0x4060, "int_out_flag_lost_clk"},    /* Interrupt status lost clock                       , */\
   { 0x4070, "int_out_flag_dc_too_high"},    /* Interrupt status dc too high                      , */\
   { 0x4080, "int_out_flag_bod_vddd_nok"},    /* Interrupt status brown out detected               , */\
   { 0x4090, "int_out_flag_clk_out_of_range"},    /* Interrupt status clock out of range               , */\
   { 0x40a0, "int_out_flag_ovpok"},    /* Interrupt status OVP alarm                        , */\
   { 0x40b0, "int_out_flag_qpump_fail"},    /* Interrupt status qpump failure                    , */\
   { 0x4400, "int_in_flag_por"},    /* Clear interrupt status POR                        , */\
   { 0x4410, "int_in_flag_bst_ocpok"},    /* Clear interrupt status DCDC OCP                   , */\
   { 0x4420, "int_in_flag_otpok"},    /* Clear interrupt status OTP alarm                  , */\
   { 0x4430, "int_in_flag_ocp_alarm"},    /* Clear interrupt status OCP alarm                  , */\
   { 0x4440, "int_in_flag_uvpok"},    /* Clear interrupt status UVP alarm                  , */\
   { 0x4450, "int_in_flag_tdm_error"},    /* Clear interrupt status TDM error                  , */\
   { 0x4460, "int_in_flag_lost_clk"},    /* Clear interrupt status lost clk                   , */\
   { 0x4470, "int_in_flag_dc_too_high"},    /* Clear interrupt status dc too high                , */\
   { 0x4480, "int_in_flag_bod_vddd_nok"},    /* Clear interrupt status brown out detected         , */\
   { 0x4490, "int_in_flag_clk_out_of_range"},    /* Clear interrupt status clock out of range         , */\
   { 0x44a0, "int_in_flag_ovpok"},    /* Clear interrupt status OVP alarm                  , */\
   { 0x44b0, "int_in_flag_qpump_fail"},    /* Clear interrupt status qpump failure              , */\
   { 0x4800, "int_enable_flag_por"},    /* Enable interrupt POR                              , */\
   { 0x4810, "int_enable_flag_bst_ocpok"},    /* Enable interrupt DCDC OCP                         , */\
   { 0x4820, "int_enable_flag_otpok"},    /* Enable interrupt OTP alarm                        , */\
   { 0x4830, "int_enable_flag_ocp_alarm"},    /* Enable interrupt OCP alarm                        , */\
   { 0x4840, "int_enable_flag_uvpok"},    /* Enable interrupt UVP alarm                        , */\
   { 0x4850, "int_enable_flag_tdm_error"},    /* Enable interrupt TDM error                        , */\
   { 0x4860, "int_enable_flag_lost_clk"},    /* Enable interrupt lost clk                         , */\
   { 0x4870, "int_enable_flag_dc_too_high"},    /* Enable interrupt dc too high                      , */\
   { 0x4880, "int_enable_flag_bod_vddd_nok"},    /* Enable interrupt brown out detect                 , */\
   { 0x4890, "int_enable_flag_clk_out_of_range"},    /* Enable interrupt clock out of range               , */\
   { 0x48a0, "int_enable_flag_ovpok"},    /* Enable interrupt OVP alarm                        , */\
   { 0x48b0, "int_enable_flag_qpump_fail"},    /* Enable interrupt qpump failure                    , */\
   { 0x4c00, "int_polarity_flag_por"},    /* Interrupt polarity POR                            , */\
   { 0x4c10, "int_polarity_flag_bst_ocpok"},    /* Interrupt polarity DCDC OCP                       , */\
   { 0x4c20, "int_polarity_flag_otpok"},    /* Interrupt polarity OTP alarm                      , */\
   { 0x4c30, "int_polarity_flag_ocp_alarm"},    /* Interrupt polarity OCP alarm                      , */\
   { 0x4c40, "int_polarity_flag_uvpok"},    /* Interrupt polarity UVP alarm                      , */\
   { 0x4c50, "int_polarity_flag_tdm_error"},    /* Interrupt polarity TDM error                      , */\
   { 0x4c60, "int_polarity_flag_lost_clk"},    /* Interrupt polarity lost clk                       , */\
   { 0x4c70, "int_polarity_flag_dc_too_high"},    /* Interrupt polarity dc too high                    , */\
   { 0x4c80, "int_polarity_flag_bod_vddd_nok"},    /* Interrupt polarity brown out detect               , */\
   { 0x4c90, "int_polarity_flag_clk_out_of_range"},    /* Interrupt polarity clock out of range             , */\
   { 0x4ca0, "int_polarity_flag_ovpok"},    /* Interrupt polarity OVP alarm                      , */\
   { 0x4cb0, "int_polarity_flag_qpump_fail"},    /* Interrupt polarity qpump failure                  , */\
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
   { 0x54a1, "bst_pst_slope"},    /* Booster slope control                             , */\
   { 0x54c1, "amp_pst_bbm"},    /* Amplifier break-before-make delay                 , */\
   { 0x54e1, "bst_pst_bbm"},    /* Booster break-before-make delay                   , */\
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
   { 0x5bf0, "dualcell"},    /* Single or dual cell Battery                       , */\
   { 0x5c03, "bssdc_release_rate"},    /* BSS release rate  (reducing DCMCC)                , */\
   { 0x5c43, "bssdc_hold_time"},    /* BSS hold time (reducing DCMCC)                    , */\
   { 0x5c81, "bssdc_steepness"},    /* Battery supply safeguard steepness (reducing DCMCC), */\
   { 0x5ca2, "bssdc_reduction_limit"},    /* BSS allowed reduction level (reducing DCMCC)      , */\
   { 0x5cd1, "bss_flag_select"},    /* Select source for BSS flag                        , */\
   { 0x5cf0, "bypass_bss"},    /* Bypass the effect of BSS on boost voltage         , */\
   { 0x5d05, "bst_efficiency"},    /* Overdrive. Efficiency of the class D amplifier    , */\
   { 0x5d66, "bst_load_resistance"},    /* Overdrive. Load resistance                        , */\
   { 0x5e05, "bst_overdrive_gain"},    /* Overdrive. Proportional gain parameter to determine the amount of overboosting, */\
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
   { 0x6410, "bst_lowdrive"},    /* Boost low drive mode control in direct mode       , */\
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
   { 0x6b00, "disable_auto_engage"},    /* Disable auto engage                               , */\
   { 0x6b10, "disable_engage"},    /* Disable engage                                    , */\
   { 0x6c60, "dly_bss_rst"},    /* Delay bss reset                                   , */\
   { 0x6c78, "spare_out"},    /* Spare control bits for future use                 , */\
   { 0x6d09, "spare_in"},    /* Spare control bit - read only                     , */\
   { 0x6e00, "flag_idle_power_mode"},    /* Idle power mode                                   , */\
   { 0x6f72, "pwm_clip_lvl"},    /* Clip detect threshold control                     , */\
   { 0x7060, "boost_intel"},    /* Adaptive boost mode                               , */\
   { 0x7103, "bst_drive"},    /* Drive setting of Booster powerstage               , */\
   { 0x7400, "dcdc_disable_ns"},    /* Disable control of noise shaper in DCDC control   , */\
   { 0x7410, "dcdc_disable_mod8bit"},    /* Disable control of reset of noise shaper when 8 bit value for dcdc control occurs, */\
   { 0x7424, "boost_trip_lvl_offset"},    /* Boost headroom  Offset                            , */\
   { 0x7494, "track_hold_time"},    /* Hold time for booster                             , */\
   { 0x74e0, "sel_dcdc_envelope_8fs"},    /* Selection of data for adaptive boost algorithm, effective only when DCIE is set to 1, */\
   { 0x7509, "boost_trip_lvl_1st"},    /* 1st Adaptive boost trip level, effective only when DCIE is set to 1, */\
   { 0x75a4, "boost_trip_lvl_track"},    /* Booster headroom gain, increasing headroom when signal amplitude increase, */\
   { 0x75f0, "bypass_dcdc_lpf"},    /* Bypass control of DCDC control low pass filter for quantization noise suppression, */\
   { 0x7687, "scnd_boost_voltage"},    /* Maximum boost voltage                             , */\
   { 0x7800, "enbl_bst_freqmin"},    /* Enable booster minimum frequency limitation       , */\
   { 0x7810, "overrule_dcm"},    /* Overrule_dcm                                      , */\
   { 0x7821, "bst_nomfreq"},    /* Values for Booster nominal frequency              , */\
   { 0x7900, "minion_test_disable"},    /* Testsignal MINION disable the minion even if the loop want to enable it, */\
   { 0x7910, "minion_test_ocd_force"},    /* Testsignal MINION  generate minion ocd flags      , */\
   { 0x7920, "minion_test_vsensep"},    /* Testsignal MINION  observe OUTP signal on ATBP    , */\
   { 0x7930, "minion_test_vsensen"},    /* Testsignal MINION  observe OUTN signal on ATBP    , */\
   { 0x7940, "minion_test_vdd1v8sense"},    /* Sense the VDD1V8 supply on ATBP/TEST1             , */\
   { 0x7a00, "minion_ocd_disable"},    /* Disable the OCD functionality of the MINION       , */\
   { 0x7b02, "ns_hp2ln_criterion"},    /* Zeroes as threshold to swap from high power to low noise mode, */\
   { 0x7b32, "ns_ln2hp_criterion"},    /* Low power mode detector   ctrl cal_offset from gain module , */\
   { 0x7b65, "low_noise_zero_lvl"},    /* Low noise mode   zero crossing  detection level   , */\
   { 0x7c05, "low_noise_threshold_lvl"},    /* Low noise mode  amplitude trigger level           , */\
   { 0x7c65, "low_noise_hold_time"},    /* Low noise mode detector   ctrl hold time before low audio is reckoned to be low audio, */\
   { 0x7cc0, "amp_gain_mode"},    /* Music Mode                                        , */\
   { 0x7ce1, "lownoisegain_mode"},    /* Low Noise Mode control when in Music Mode         , */\
   { 0x8000, "cvs_bulk_hv_to_vddp"},    /* IITF 16V bulk                                     , */\
   { 0x8010, "cvs_ibias_max"},    /* IITF  bias current                                , */\
   { 0x8050, "cs_gain_control"},    /* Current sense gain control                        , */\
   { 0x8060, "cs_bypass_gc"},    /* Bypasses the CS gain correction                   , */\
   { 0x8087, "cs_gain"},    /* Current sense gain                                , */\
   { 0x8305, "cs_ktemp"},    /* Current sense temperature compensation trimming (1 - VALUE*TEMP)*signal, */\
   { 0x8378, "atb_spare"},    /* ATB Spare                                         , */\
   { 0x8401, "volsense_dc_prot_time"},    /* Voltage sense dc speaker protection time          , */\
   { 0x842c, "volsense_dc_prot_level"},    /* Voltage sense dc speaker protection level         , */\
   { 0x84f0, "enbl_dcprot"},    /* Voltage sense dc speaker protection enable        , */\
   { 0x850c, "volsense_dc_level"},    /* Voltage sense dc level                            , */\
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
   { 0xa380, "efuse_bank_section"},    /* Efuse bank section                                , */\
   { 0xa40f, "efuse_man_data_out"},    /* EFUSE manual read data                            , */\
   { 0xa50f, "efuse_man_data_in"},    /* Write data for EFUSE manual write                 , */\
   { 0xa600, "efuse_vdd_ctrl"},    /* EFUSE AVDD enable                                 , */\
   { 0xa610, "clk_efuse_sel"},    /* Select clk_efuse source((for programming to choose an extranl clock), */\
   { 0xa700, "disable_copy_efuse_to_iic"},    /* Disable efuse copy to i2c register                , */\
   { 0xb010, "bypass_ocpcounter"},    /* Bypass OCP Counter                                , */\
   { 0xb020, "bypass_glitchfilter"},    /* Bypass glitch filter                              , */\
   { 0xb030, "bypass_ovp"},    /* Bypass OVP                                        , */\
   { 0xb050, "bypass_otp"},    /* Bypass OTP                                        , */\
   { 0xb060, "bypass_lost_clk"},    /* Bypass lost clock detector                        , */\
   { 0xb070, "ctrl_vpalarm"},    /* Vpalarm (uvp ovp handling)                        , */\
   { 0xb087, "ocp_threshold"},    /* OCP threshold level                               , */\
   { 0xb103, "uvp_set"},    /* Uvp set                                           , */\
   { 0xbe0f, "sw_profile"},    /* Software profile data                             , */\
   { 0xbf0f, "sw_vstep"},    /* Software vstep information                        , */\
   { 0xc000, "rgu_use_direct_ctrls"},    /* Use Direct control for datapath and cgu reset     , */\
   { 0xc010, "rst_datapath"},    /* Direct control for datapath reset                 , */\
   { 0xc020, "rst_cgu"},    /* Direct control for cgu reset                      , */\
   { 0xc030, "fro_use_direct_ctrls"},    /* Use Direct control for fro oscillator             , */\
   { 0xc040, "pll_use_direct_ctrls"},    /* Use Direct control for PLL                        , */\
   { 0xc050, "amp_use_direct_ctrls"},    /* Use Direct control for amplifier                  , */\
   { 0xc060, "bst_use_direct_ctrls"},    /* Use Direct control for booster                    , */\
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
   { 0xc620, "hs_mode"},    /* I2C high speed mode control                       , */\
   { 0xc630, "io_flt_byp"},    /* Bypass the built-in filters of SCL and SDA        , */\
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
   { 0xce30, "dcdcoff_mode"},    /* DCDC on/off                                       , */\
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
   { 0xd210, "gpi_pad_disable"},    /* GPIO PAD Disable                                  , */\
   { 0xd253, "test_spare_out1"},    /* Test spare out 1                                  , */\
   { 0xd292, "sel_dpwm_signal"},    /* Select signal to be tested                        , */\
   { 0xd2c3, "test_spare_out2"},    /* Test spare out 2                                  , */\
   { 0xd300, "atb_reset"},    /* Analog Test Bus reset when atb_use_direct_ctrls  is set to 1, */\
   { 0xd312, "bst_fmin"},    /* Booster minimum frequency when bst_use_direct_ctrls is set to 1, */\
   { 0xd400, "amp_enbl"},    /* Amplifier enable  when amp_use_direct_ctrls is set to 1, */\
   { 0xd410, "bst_enbl"},    /* Booster enable when bst_use_direct_ctrls is set to 1, */\
   { 0xd427, "bst_vset"},    /* Booster voltage when  bst_use_direct_ctrls is set to 1, */\
   { 0xd4a3, "bst_ocp"},    /* Control da_bst_ocp when bst_use_direct_ctrls is set to 1, */\
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
   { 0xd800, "bst_bias_pu"},    /* Power up biasing of controller and reference voltage generation when bst_use_direct_ctrls is set to 1, */\
   { 0xd810, "qpump_pu"},    /* Power up biasing of charge pump qpump_use_direct_ctrls is set to 1, */\
   { 0xd820, "bst_timer_pu"},    /* Power up biasing of timer in COT controller bst_use_direct_ctrls is set to 1, */\
   { 0xd830, "bst_fbck_pu"},    /* Power up biasing of feedback DAC in COT controller bst_use_direct_ctrls is set to 1, */\
   { 0xd840, "bst_pst_pu"},    /* Power up biasing of BST powerstage bst_use_direct_ctrls is set to 1, */\
   { 0xd853, "bst_dtb"},    /* Signal selection of digital testbus               , */\
   { 0xd890, "bst_dtb_cot1"},    /* Selection of control stage DTB (never together with rg_bst_dtb_pst!), */\
   { 0xd8a0, "bst_dtb_cot2"},    /* Selection of control stage DTB (never together with rg_bst_dtb_pst!), */\
   { 0xd8b0, "bst_dtb_pst"},    /* Selection of power stage DTB   (never together with rg_bst_dtb_cot!), */\
   { 0xd8c0, "bst_test_pst"},    /* Enable testmode PST (PST responds to da_bst_pst_in), */\
   { 0xd8d0, "bst_test_bist"},    /* Enable CVI mode (use powerFET as current source)  , */\
   { 0xd8e0, "bst_test_ocp"},    /* Toggle around OCP level in CVI mode               , */\
   { 0xd8f0, "bst_test_vstress"},    /* Enable vstress PST and Qpump                      , */\
   { 0xd900, "atb_hv_vddb"},    /* Connect VDDB to vatb_hv (TEST3)                   , */\
   { 0xd910, "atb_hv_gndb"},    /* Connect GNDB to vatb_hv (TEST3)                   , */\
   { 0xd920, "bst_test_so"},    /* Enable for self oscillating test mode             , */\
   { 0xd970, "atb_vfbck"},    /* Connect controller feedback node to ATBP output   , */\
   { 0xd980, "bst_test_cot"},    /* Timer test mode, forcing "aa_ton_reset" and "aa_toff_reset" to 0, */\
   { 0xd990, "atb_vref_0v9"},    /* Connect 0.9 V reference to ATBN output            , */\
   { 0xd9a0, "atb_vref_ton"},    /* Connect reference voltage for Ton to ATBN output  , */\
   { 0xd9b0, "atb_vint_toff"},    /* Connect Toff timer integration node to ATBP output, */\
   { 0xd9c0, "atb_vint_ton"},    /* Connect Ton timer integration node to ATBP output , */\
   { 0xd9d0, "qpump_test_vstress"},    /* Enable voltage stress test in Qpump flycap        , */\
   { 0xd9e0, "qpump_test_en"},    /* Enable Qpump test (freeze clocking)               , */\
   { 0xd9f0, "bst_lowdrivebias"},    /* Enable lowdrive bias                              , */\
   { 0xda00, "bst_filterenable"},    /* Enable singing capacitor effect filter in current DAC, */\
   { 0xda10, "bst_intenable"},    /* Enable for integrator in feedback                 , */\
   { 0xda20, "bst_p2aenable"},    /* Enable for peak-to-average compensation           , */\
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
   { 0xdc20, "atb_vsh"},    /* Connect integrator input on ATBP                  , */\
   { 0xdc30, "atb_vcint"},    /* Connect integrator capacitor on ATBN              , */\
   { 0xdc40, "atb_vref_1v2"},    /* Connect 1.215 V reference on ATBP                 , */\
   { 0xdc50, "atb_vint_toff_min"},    /* Connect Toff_min timer integration node on ATBP   , */\
   { 0xdc60, "atb_vref_toff"},    /* Connect reference voltage for Toff on ATBN        , */\
   { 0xdc70, "atb_vbat_20"},    /* Connect divided, buffered Vbat on ATBN            , */\
   { 0xdc80, "atb_vbst_20"},    /* Connect divided, buffered Vbst on ATBP            , */\
   { 0xdc90, "atb_vbst_10"},    /* Connect divided Vbst on ATBP                      , */\
   { 0xdca0, "atb_vp2a"},    /* Connect ramp voltage for Ip2a on ATBP             , */\
   { 0xdcb0, "atb_ip2a"},    /* Connect Ip2a output current on ATBN               , */\
   { 0xdd00, "bst_ccm"},    /* Force Continuous Conduction Mode                  , */\
   { 0xdd11, "bst_fbgain"},    /* Gain selection for feedback signal                , */\
   { 0xdd33, "bst_coilselect"},    /* Booster coil value                                , */\
   { 0xdd70, "amp_enable_clip_lpm"},    /* Enable clipping of tzdac input currents in case of Low Power Mode, */\
   { 0xdd80, "amp_enable_clip_pst"},    /* Enable clipping of tzdac input currents in case Main PST is active, */\
   { 0xdd90, "amp_dis_cmfb_lpm"},    /* Disable common-mode feedback in case of Low Power Mode, */\
   { 0xdda0, "amp_dis_cmfb_pst"},    /* Disable common-mode feedback in case Main PST is active, */\
   { 0xde01, "sourcebst"},    /* Set BST source to                                 , */\
   { 0xde20, "invertbst"},    /* Invert pwma test signal                           , */\
   { 0xde36, "pulselength_bst"},    /* Pulse length setting test input for amplifier (PWM clock 2048/4096 Fs), */\
   { 0xdf00, "bst_spare1"},    /* Bst spare 1                                       , */\
   { 0xdf10, "bst_spare2"},    /* Bst spare 2                                       , */\
   { 0xdf20, "bst_spare3"},    /* Bst spare 3                                       , */\
   { 0xdf30, "bst_spare4"},    /* Bst spare 4                                       , */\
   { 0xdf40, "bst_spare5"},    /* Bst spare 5                                       , */\
   { 0xdf50, "bst_spare6"},    /* Bst spare 6                                       , */\
   { 0xdf60, "bst_spare7"},    /* Bst spare 7                                       , */\
   { 0xdf70, "bst_spare8"},    /* Bst spare 8                                       , */\
   { 0xdf80, "bst_spare9"},    /* Bst spare 9                                       , */\
   { 0xdf90, "bst_spare10"},    /* Bst spare 10                                      , */\
   { 0xe007, "ndiv"},    /* NDIV                                              , */\
   { 0xe083, "jlength"},    /* Jingle length                                     , */\
   { 0xe0c0, "pot_pol"},    /* POT polarity                                      , */\
   { 0xe0d0, "lpc_pol"},    /* LPC polarity                                      , */\
   { 0xe0e0, "gpi_pd"},    /* GPI pull down                                     , */\
   { 0xe0f0, "gpi_pu"},    /* GPI pull up                                       , */\
   { 0xe10f, "mdiv"},    /* MDIV                                              , */\
   { 0xe20f, "note1"},    /* Note1 (key2 protected)                            , */\
   { 0xe30f, "note2"},    /* Note2 (key2 protected)                            , */\
   { 0xe40f, "note3"},    /* Note3 (key2 protected)                            , */\
   { 0xe50f, "note4"},    /* Note4 (key2 protected)                            , */\
   { 0xe60f, "note5"},    /* Note5 (key2 protected)                            , */\
   { 0xe70f, "note6"},    /* Note6 (key2 protected)                            , */\
   { 0xe80f, "note7"},    /* Note7 (key2 protected)                            , */\
   { 0xe90f, "note8"},    /* Note8 (key2 protected)                            , */\
   { 0xea0f, "note9"},    /* Note9 (key2 protected)                            , */\
   { 0xeb0f, "note10"},    /* Note10 (key2 protected)                           , */\
   { 0xec0f, "note11"},    /* Note11 (key2 protected)                           , */\
   { 0xed0f, "note12"},    /* Note12 (key2 protected)                           , */\
   { 0xee0f, "note13"},    /* Note13 (key2 protected)                           , */\
   { 0xef0f, "note14"},    /* Note14 (key2 protected)                           , */\
   { 0xf002, "cvs_vs_trim"},    /* Voltage sense trim offset of n-side               , */\
   { 0xf031, "cvs_sdm_offset"},    /* Programmed offset of OTA to push idle tones       , */\
   { 0xf053, "amp_ciff_trim"},    /* Trim capacitors of CIFF integrators               , */\
   { 0xf090, "disable_lpm"},    /* Disable low power mode                            , */\
   { 0xf0a5, "spare_f0_15_10"},    /* SPARE                                             , */\
   { 0xf103, "amp_ochp_trim"},    /* Trim OCP level AMP PST 2's compliment (key1 protected), */\
   { 0xf143, "amp_ochn_trim"},    /* Trim OCP level AMP PST 2's compliment (key1 protected), */\
   { 0xf183, "amp_oclp_trim"},    /* Trim OCP level AMP PST 2's compliment (key1 protected), */\
   { 0xf1c3, "amp_ocln_trim"},    /* Trim OCP level AMP PST 2's compliment (key1 protected), */\
   { 0xf203, "bst_ocl_trim"},    /* Trim OCP level (low side)                         , */\
   { 0xf243, "bst_och_trim"},    /* Trim OCP level (high side)                        , */\
   { 0xf283, "bst_freqtrim"},    /* Trim COT timer frequency                          , */\
   { 0xf2c3, "bst_ip2atrim"},    /* Trim bits for peak to average compensation (from Bandgap Reference I-trim), */\
   { 0xf303, "bgr_vtrim"},    /* Trim BGR 900mV reference voltage(2s-complement)   , */\
   { 0xf343, "bgr_itrim"},    /* Trim BGR reference current                        , */\
   { 0xf382, "bgr_tctrim"},    /* Trim BGR reference voltage temperature coefficient, */\
   { 0xf3b1, "type_selection"},    /* Type Selection                                    , */\
   { 0xf407, "calibr_osc_delta_ndiv"},    /* Clk_range_check calibration value (2s-complement) , */\
   { 0xf482, "pll_cp_ib_trim"},    /* Connect to rg_pl200m_cp_ib_trim, pl200m charge pump current bias trim code, */\
   { 0xf4b2, "pll_vco_gm_rs_trim"},    /* Connect to rg_pl200m_vco_gm_rs_trim, pl200m vco gm source resistor of gm selection word, */\
   { 0xf4e0, "lock_bypass_clipper"},    /* Disable function bypass_clipper                   , */\
   { 0xf4f0, "lock_max_dcdc_voltage"},    /* Limit Max DCDC voltage                            , */\
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

enum tfa9867b_irq {
	tfa9867b_irq_stvdds = 0,
	tfa9867b_irq_stbstoc = 1,
	tfa9867b_irq_stotds = 2,
	tfa9867b_irq_stocpr = 3,
	tfa9867b_irq_stuvds = 4,
	tfa9867b_irq_sttdmer = 5,
	tfa9867b_irq_stnoclk = 6,
	tfa9867b_irq_stdcth = 7,
	tfa9867b_irq_stbodnok = 8,
	tfa9867b_irq_stcoor = 9,
	tfa9867b_irq_stovds = 10,
	tfa9867b_irq_stqpfail = 11,
	tfa9867b_irq_max = -1,
	tfa9867b_irq_all = -1 /* all irqs */};

#define TFA9867B_IRQ_NAMETABLE static tfaIrqName_t tfa9867b_irq_names[]= {\
	{0, "STVDDS"},\
	{1, "STBSTOC"},\
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
	{12, "12"},\
}
#endif /* _TFA9867_TFAFIELDNAMES_B_H */
