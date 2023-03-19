/* 
* This file is part of STiD135 OXFORD LLA 
* 
* Copyright (c) <2014>-<2018>, STMicroelectronics - All Rights Reserved 
* Author(s): Mathias Hilaire (mathias.hilaire@st.com), Thierry Delahaye (thierry.delahaye@st.com) for STMicroelectronics. 
* 
* License terms: BSD 3-clause "New" or "Revised" License. 
* 
* Redistribution and use in source and binary forms, with or without 
* modification, are permitted provided that the following conditions are met: 
* 
* 1. Redistributions of source code must retain the above copyright notice, this 
* list of conditions and the following disclaimer. 
* 
* 2. Redistributions in binary form must reproduce the above copyright notice, 
* this list of conditions and the following disclaimer in the documentation 
* and/or other materials provided with the distribution. 
* 
* 3. Neither the name of the copyright holder nor the names of its contributors 
* may be used to endorse or promote products derived from this software 
* without specific prior written permission. 
* 
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE 
* FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL 
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR 
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER 
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, 
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
* 
*/ 
#ifndef _DVBSX_FECSPY_REG_INIT_H
#define _DVBSX_FECSPY_REG_INIT_H

/* -------------------------------------------------------------------------
 * File name  : dvbsx_fecspy_reg_init.h
 * File type  : C header file
 * -------------------------------------------------------------------------
 * Description:  Register map constants
 * Generated by spirit2regtest v2.24_alpha3
 * -------------------------------------------------------------------------
 */


/* Register map constants */

/* FECSPY */
#define RC8CODEW_DVBSX_FECSPY_FECSPY                                 0x00000000
#define RC8CODEW_DVBSX_FECSPY_FECSPY__DEFAULT                        0x0       
#define FC8CODEW_DVBSX_FECSPY_FECSPY_BERMETER_RESET__MASK            0x01      
#define FC8CODEW_DVBSX_FECSPY_FECSPY_BERMETER_LMODE__MASK            0x02      
#define FC8CODEW_DVBSX_FECSPY_FECSPY_BERMETER_DATAMODE__MASK         0x0C      
#define FC8CODEW_DVBSX_FECSPY_FECSPY_UNUSUAL_PACKET__MASK            0x10      
#define FC8CODEW_DVBSX_FECSPY_FECSPY_SERIAL_MODE__MASK               0x20      
#define FC8CODEW_DVBSX_FECSPY_FECSPY_NO_SYNCBYTE__MASK               0x40      
#define FC8CODEW_DVBSX_FECSPY_FECSPY_SPY_ENABLE__MASK                0x80      

/* FSPYCFG */
#define RC8CODEW_DVBSX_FECSPY_FSPYCFG                                0x00000001
#define RC8CODEW_DVBSX_FECSPY_FSPYCFG__DEFAULT                       0x0       
#define FC8CODEW_DVBSX_FECSPY_FSPYCFG_SPY_HYSTERESIS__MASK           0x03      
#define FC8CODEW_DVBSX_FECSPY_FSPYCFG_I2C_MODE__MASK                 0x0C      
#define FC8CODEW_DVBSX_FECSPY_FSPYCFG_ONE_SHOT__MASK                 0x10      
#define FC8CODEW_DVBSX_FECSPY_FSPYCFG_RST_ON_ERROR__MASK             0x20      
#define FC8CODEW_DVBSX_FECSPY_FSPYCFG_FECSPY_INPUT__MASK             0xC0      

/* FSPYDATA */
#define RC8CODEW_DVBSX_FECSPY_FSPYDATA                               0x00000002
#define RC8CODEW_DVBSX_FECSPY_FSPYDATA__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FSPYDATA_SPY_OUTDATA_MODE__MASK        0x1F      
#define FC8CODEW_DVBSX_FECSPY_FSPYDATA_SPY_CNULLPKT__MASK            0x20      
#define FC8CODEW_DVBSX_FECSPY_FSPYDATA_NOERROR_PKTJITTER__MASK       0x40      
#define FC8CODEW_DVBSX_FECSPY_FSPYDATA_SPY_STUFFING__MASK            0x80      

/* FSPYOUT */
#define RC8CODEW_DVBSX_FECSPY_FSPYOUT                                0x00000003
#define RC8CODEW_DVBSX_FECSPY_FSPYOUT__DEFAULT                       0x0       
#define FC8CODEW_DVBSX_FECSPY_FSPYOUT_STUFF_MODE__MASK               0x07      
#define FC8CODEW_DVBSX_FECSPY_FSPYOUT_SPY_OUTDATA_BUS__MASK          0x38      
#define FC8CODEW_DVBSX_FECSPY_FSPYOUT_FSPY_AUTODETECT__MASK          0x40      
#define FC8CODEW_DVBSX_FECSPY_FSPYOUT_FSPY_DIRECT__MASK              0x80      

/* FSPYBER */
#define RC8CODEW_DVBSX_FECSPY_FSPYBER                                0x00000004
#define RC8CODEW_DVBSX_FECSPY_FSPYBER__DEFAULT                       0x0       
#define FC8CODEW_DVBSX_FECSPY_FSPYBER_FSPYBER_CTIME__MASK            0x07      
#define FC8CODEW_DVBSX_FECSPY_FSPYBER_FSPYBER_UNSYNC__MASK           0x08      
#define FC8CODEW_DVBSX_FECSPY_FSPYBER_FSPYBER_SYNCBYTE__MASK         0x10      
#define FC8CODEW_DVBSX_FECSPY_FSPYBER_FSPYBER_OBSMODE__MASK          0x20      
#define FC8CODEW_DVBSX_FECSPY_FSPYBER_FSPYBER_DISTMODE__MASK         0x40      
#define FC8CODEW_DVBSX_FECSPY_FSPYBER_FSPY_NOBLANKPKT__MASK          0x80      

/* FSPYOPT */
#define RC8CODEW_DVBSX_FECSPY_FSPYOPT                                0x00000005
#define RC8CODEW_DVBSX_FECSPY_FSPYOPT__DEFAULT                       0x0       
#define FC8CODEW_DVBSX_FECSPY_FSPYOPT_FSPYOPT_GSENCR__MASK           0x01      
#define FC8CODEW_DVBSX_FECSPY_FSPYOPT_FSPYOPT_PUSIPAD__MASK          0x02      
#define FC8CODEW_DVBSX_FECSPY_FSPYOPT_FSPYOPT_HFSGNL__MASK           0x04      
#define FC8CODEW_DVBSX_FECSPY_FSPYOPT_FSPYOPT_CHBOND__MASK           0x08      

/* FSTATUS */
#define RC8CODEW_DVBSX_FECSPY_FSTATUS                                0x00000008
#define RC8CODEW_DVBSX_FECSPY_FSTATUS__DEFAULT                       0x0       
#define FC8CODEW_DVBSX_FECSPY_FSTATUS_RESULT_STATE__MASK             0x0F      
#define FC8CODEW_DVBSX_FECSPY_FSTATUS_DSS_SYNCBYTE__MASK             0x10      
#define FC8CODEW_DVBSX_FECSPY_FSTATUS_FOUND_SIGNAL__MASK             0x20      
#define FC8CODEW_DVBSX_FECSPY_FSTATUS_VALID_SIM__MASK                0x40      
#define FC8CODEW_DVBSX_FECSPY_FSTATUS_SPY_ENDSIM__MASK               0x80      

/* FGOODPACK */
#define RC8CODEW_DVBSX_FECSPY_FGOODPACK                              0x00000009
#define RC8CODEW_DVBSX_FECSPY_FGOODPACK__DEFAULT                     0x0       
#define FC8CODEW_DVBSX_FECSPY_FGOODPACK_FGOOD_PACKET__MASK           0xFF      

/* FPACKCNT */
#define RC8CODEW_DVBSX_FECSPY_FPACKCNT                               0x0000000a
#define RC8CODEW_DVBSX_FECSPY_FPACKCNT__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FPACKCNT_FPACKET_COUNTER__MASK         0xFF      

/* FSPYMISC */
#define RC8CODEW_DVBSX_FECSPY_FSPYMISC                               0x0000000b
#define RC8CODEW_DVBSX_FECSPY_FSPYMISC__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FSPYMISC_FLABEL_COUNTER__MASK          0xFF      

/* FSTATES1 */
#define RC8CODEW_DVBSX_FECSPY_FSTATES1                               0x0000000c
#define RC8CODEW_DVBSX_FECSPY_FSTATES1__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FSTATES1_RSTATE_8__MASK                0x01      
#define FC8CODEW_DVBSX_FECSPY_FSTATES1_RSTATE_9__MASK                0x02      
#define FC8CODEW_DVBSX_FECSPY_FSTATES1_RSTATE_A__MASK                0x04      
#define FC8CODEW_DVBSX_FECSPY_FSTATES1_RSTATE_B__MASK                0x08      
#define FC8CODEW_DVBSX_FECSPY_FSTATES1_RSTATE_C__MASK                0x10      
#define FC8CODEW_DVBSX_FECSPY_FSTATES1_RSTATE_D__MASK                0x20      
#define FC8CODEW_DVBSX_FECSPY_FSTATES1_RSTATE_E__MASK                0x40      
#define FC8CODEW_DVBSX_FECSPY_FSTATES1_RSTATE_F__MASK                0x80      

/* FSTATES0 */
#define RC8CODEW_DVBSX_FECSPY_FSTATES0                               0x0000000d
#define RC8CODEW_DVBSX_FECSPY_FSTATES0__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FSTATES0_RSTATE_0__MASK                0x01      
#define FC8CODEW_DVBSX_FECSPY_FSTATES0_RSTATE_1__MASK                0x02      
#define FC8CODEW_DVBSX_FECSPY_FSTATES0_RSTATE_2__MASK                0x04      
#define FC8CODEW_DVBSX_FECSPY_FSTATES0_RSTATE_3__MASK                0x08      
#define FC8CODEW_DVBSX_FECSPY_FSTATES0_RSTATE_4__MASK                0x10      
#define FC8CODEW_DVBSX_FECSPY_FSTATES0_RSTATE_5__MASK                0x20      
#define FC8CODEW_DVBSX_FECSPY_FSTATES0_RSTATE_7__MASK                0x80      

/* FBERCPT4 */
#define RC8CODEW_DVBSX_FECSPY_FBERCPT4                               0x00000010
#define RC8CODEW_DVBSX_FECSPY_FBERCPT4__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FBERCPT4_FBERMETER_CPT__MASK           0xFF      

/* FBERCPT3 */
#define RC8CODEW_DVBSX_FECSPY_FBERCPT3                               0x00000011
#define RC8CODEW_DVBSX_FECSPY_FBERCPT3__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FBERCPT3_FBERMETER_CPT__MASK           0xFF      

/* FBERCPT2 */
#define RC8CODEW_DVBSX_FECSPY_FBERCPT2                               0x00000012
#define RC8CODEW_DVBSX_FECSPY_FBERCPT2__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FBERCPT2_FBERMETER_CPT__MASK           0xFF      

/* FBERCPT1 */
#define RC8CODEW_DVBSX_FECSPY_FBERCPT1                               0x00000013
#define RC8CODEW_DVBSX_FECSPY_FBERCPT1__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FBERCPT1_FBERMETER_CPT__MASK           0xFF      

/* FBERCPT0 */
#define RC8CODEW_DVBSX_FECSPY_FBERCPT0                               0x00000014
#define RC8CODEW_DVBSX_FECSPY_FBERCPT0__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FBERCPT0_FBERMETER_CPT__MASK           0xFF      

/* FBERERR2 */
#define RC8CODEW_DVBSX_FECSPY_FBERERR2                               0x00000015
#define RC8CODEW_DVBSX_FECSPY_FBERERR2__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FBERERR2_FBERMETER_ERR__MASK           0xFF      

/* FBERERR1 */
#define RC8CODEW_DVBSX_FECSPY_FBERERR1                               0x00000016
#define RC8CODEW_DVBSX_FECSPY_FBERERR1__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FBERERR1_FBERMETER_ERR__MASK           0xFF      

/* FBERERR0 */
#define RC8CODEW_DVBSX_FECSPY_FBERERR0                               0x00000017
#define RC8CODEW_DVBSX_FECSPY_FBERERR0__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FBERERR0_FBERMETER_ERR__MASK           0xFF      

/* FSPYDIST1 */
#define RC8CODEW_DVBSX_FECSPY_FSPYDIST1                              0x00000018
#define RC8CODEW_DVBSX_FECSPY_FSPYDIST1__DEFAULT                     0x0       
#define FC8CODEW_DVBSX_FECSPY_FSPYDIST1_PKTTIME_DISTANCE__MASK       0xFF      

/* FSPYDIST0 */
#define RC8CODEW_DVBSX_FECSPY_FSPYDIST0                              0x00000019
#define RC8CODEW_DVBSX_FECSPY_FSPYDIST0__DEFAULT                     0x0       
#define FC8CODEW_DVBSX_FECSPY_FSPYDIST0_PKTTIME_DISTANCE__MASK       0xFF      

/* FSPYPCR1 */
#define RC8CODEW_DVBSX_FECSPY_FSPYPCR1                               0x0000001a
#define RC8CODEW_DVBSX_FECSPY_FSPYPCR1__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FSPYPCR1_PCRTIME_DISTANCE__MASK        0xFF      

/* FSPYPCR0 */
#define RC8CODEW_DVBSX_FECSPY_FSPYPCR0                               0x0000001b
#define RC8CODEW_DVBSX_FECSPY_FSPYPCR0__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FSPYPCR0_PCRTIME_DISTANCE__MASK        0xFF      

/* FSPYNCR1 */
#define RC8CODEW_DVBSX_FECSPY_FSPYNCR1                               0x0000001c
#define RC8CODEW_DVBSX_FECSPY_FSPYNCR1__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FSPYNCR1_NCRTIME_DISTANCE__MASK        0xFF      

/* FSPYNCR0 */
#define RC8CODEW_DVBSX_FECSPY_FSPYNCR0                               0x0000001d
#define RC8CODEW_DVBSX_FECSPY_FSPYNCR0__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FSPYNCR0_NCRTIME_DISTANCE__MASK        0xFF      

/* FSPYOBS7 */
#define RC8CODEW_DVBSX_FECSPY_FSPYOBS7                               0x00000020
#define RC8CODEW_DVBSX_FECSPY_FSPYOBS7__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FSPYOBS7_FSPY_RES_STATE1__MASK         0x0F      
#define FC8CODEW_DVBSX_FECSPY_FSPYOBS7_FSPYOBS_STROUT__MASK          0x10      
#define FC8CODEW_DVBSX_FECSPY_FSPYOBS7_FSPYOBS_ERROR__MASK           0x20      
#define FC8CODEW_DVBSX_FECSPY_FSPYOBS7_FSPYOBS_SPYFAIL__MASK         0x80      

/* FSPYOBS6 */
#define RC8CODEW_DVBSX_FECSPY_FSPYOBS6                               0x00000021
#define RC8CODEW_DVBSX_FECSPY_FSPYOBS6__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FSPYOBS6_FSPY_RES_STATEM1__MASK        0x0F      
#define FC8CODEW_DVBSX_FECSPY_FSPYOBS6_FSPY_RES_STATE0__MASK         0xF0      

/* FSPYOBS5 */
#define RC8CODEW_DVBSX_FECSPY_FSPYOBS5                               0x00000022
#define RC8CODEW_DVBSX_FECSPY_FSPYOBS5__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FSPYOBS5_FSPY_BYTEOFPKT1__MASK         0xFF      

/* FSPYOBS4 */
#define RC8CODEW_DVBSX_FECSPY_FSPYOBS4                               0x00000023
#define RC8CODEW_DVBSX_FECSPY_FSPYOBS4__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FSPYOBS4_FSPY_BYTEVAL1__MASK           0xFF      

/* FSPYOBS3 */
#define RC8CODEW_DVBSX_FECSPY_FSPYOBS3                               0x00000024
#define RC8CODEW_DVBSX_FECSPY_FSPYOBS3__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FSPYOBS3_FSPYOBS_DATA1__MASK           0xFF      

/* FSPYOBS2 */
#define RC8CODEW_DVBSX_FECSPY_FSPYOBS2                               0x00000025
#define RC8CODEW_DVBSX_FECSPY_FSPYOBS2__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FSPYOBS2_FSPYOBS_DATA0__MASK           0xFF      

/* FSPYOBS1 */
#define RC8CODEW_DVBSX_FECSPY_FSPYOBS1                               0x00000026
#define RC8CODEW_DVBSX_FECSPY_FSPYOBS1__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FSPYOBS1_FSPYOBS_DATAM1__MASK          0xFF      

/* FSPYOBS0 */
#define RC8CODEW_DVBSX_FECSPY_FSPYOBS0                               0x00000027
#define RC8CODEW_DVBSX_FECSPY_FSPYOBS0__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_FSPYOBS0_FSPYOBS_DATAM2__MASK          0xFF      

/* NCRVDESCM */
#define RC8CODEW_DVBSX_FECSPY_NCRVDESCM                              0x0000002e
#define RC8CODEW_DVBSX_FECSPY_NCRVDESCM__DEFAULT                     0x0       
#define FC8CODEW_DVBSX_FECSPY_NCRVDESCM_NCRV_INVDATA__MASK           0x02      
#define FC8CODEW_DVBSX_FECSPY_NCRVDESCM_NCRV_PERMDATA__MASK          0x04      
#define FC8CODEW_DVBSX_FECSPY_NCRVDESCM_NCRV_INVCLK__MASK            0x08      
#define FC8CODEW_DVBSX_FECSPY_NCRVDESCM_NCRV_NCRBYTE__MASK           0x10      
#define FC8CODEW_DVBSX_FECSPY_NCRVDESCM_NCRV_I2CDESC__MASK           0x60      
#define FC8CODEW_DVBSX_FECSPY_NCRVDESCM_NCRV_LINEOK__MASK            0x80      

/* NCRVDESCL */
#define RC8CODEW_DVBSX_FECSPY_NCRVDESCL                              0x0000002f
#define RC8CODEW_DVBSX_FECSPY_NCRVDESCL__DEFAULT                     0x0       
#define FC8CODEW_DVBSX_FECSPY_NCRVDESCL_NCRV_FSPYMODE__MASK          0x1F      
#define FC8CODEW_DVBSX_FECSPY_NCRVDESCL_NCRV_2BITMODE__MASK          0x60      
#define FC8CODEW_DVBSX_FECSPY_NCRVDESCL_NCRV_SERIAL__MASK            0x80      

/* NCRVOBS3 */
#define RC8CODEW_DVBSX_FECSPY_NCRVOBS3                               0x00000030
#define RC8CODEW_DVBSX_FECSPY_NCRVOBS3__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_NCRVOBS3_NCRVERIF_OBSVAL__MASK         0x3F      
#define FC8CODEW_DVBSX_FECSPY_NCRVOBS3_NCRVERIF_DSSMODE__MASK        0x40      
#define FC8CODEW_DVBSX_FECSPY_NCRVOBS3_NCRCPT_INITIALIZED__MASK      0x80      

/* NCRVOBS2 */
#define RC8CODEW_DVBSX_FECSPY_NCRVOBS2                               0x00000031
#define RC8CODEW_DVBSX_FECSPY_NCRVOBS2__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_NCRVOBS2_NCRVERIF_OBSVAL__MASK         0xFF      

/* NCRVOBS1 */
#define RC8CODEW_DVBSX_FECSPY_NCRVOBS1                               0x00000032
#define RC8CODEW_DVBSX_FECSPY_NCRVOBS1__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_NCRVOBS1_NCRVERIF_OBSVAL__MASK         0xFF      

/* NCRVOBS0 */
#define RC8CODEW_DVBSX_FECSPY_NCRVOBS0                               0x00000033
#define RC8CODEW_DVBSX_FECSPY_NCRVOBS0__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_NCRVOBS0_NCRVERIF_OBSVAL__MASK         0xFF      

/* NCRVCFG */
#define RC8CODEW_DVBSX_FECSPY_NCRVCFG                                0x00000034
#define RC8CODEW_DVBSX_FECSPY_NCRVCFG__DEFAULT                       0x0       
#define FC8CODEW_DVBSX_FECSPY_NCRVCFG_NCRV_OBSMODE__MASK             0x07      
#define FC8CODEW_DVBSX_FECSPY_NCRVCFG_NCRV_HWARECPT__MASK            0x08      
#define FC8CODEW_DVBSX_FECSPY_NCRVCFG_NCRVABS_MODE__MASK             0x30      
#define FC8CODEW_DVBSX_FECSPY_NCRVCFG_NCRV_AUTORST__MASK             0x40      
#define FC8CODEW_DVBSX_FECSPY_NCRVCFG_NCRV_RESET__MASK               0x80      

/* NCRVPID1 */
#define RC8CODEW_DVBSX_FECSPY_NCRVPID1                               0x00000035
#define RC8CODEW_DVBSX_FECSPY_NCRVPID1__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_NCRVPID1_NCRV_NCRPID__MASK             0x1F      
#define FC8CODEW_DVBSX_FECSPY_NCRVPID1_NCRV_ALLPID__MASK             0x20      
#define FC8CODEW_DVBSX_FECSPY_NCRVPID1_NCRV_DEBUG__MASK              0x40      
#define FC8CODEW_DVBSX_FECSPY_NCRVPID1_NCRV_PIDMODE__MASK            0x80      

/* NCRVPID0 */
#define RC8CODEW_DVBSX_FECSPY_NCRVPID0                               0x00000036
#define RC8CODEW_DVBSX_FECSPY_NCRVPID0__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_NCRVPID0_NCRV_NCRPID__MASK             0xFF      

/* NCRVCFG2 */
#define RC8CODEW_DVBSX_FECSPY_NCRVCFG2                               0x00000037
#define RC8CODEW_DVBSX_FECSPY_NCRVCFG2__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_NCRVCFG2_NCRVERIF_NOPRED__MASK         0x01      
#define FC8CODEW_DVBSX_FECSPY_NCRVCFG2_NCRVERIF_PROTECT__MASK        0x02      
#define FC8CODEW_DVBSX_FECSPY_NCRVCFG2_NCRV_BIT9FAIL__MASK           0x04      

/* NCRVMAX1 */
#define RC8CODEW_DVBSX_FECSPY_NCRVMAX1                               0x00000038
#define RC8CODEW_DVBSX_FECSPY_NCRVMAX1__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_NCRVMAX1_NCRVERIF_NCRMAX__MASK         0xFF      

/* NCRVMAX0 */
#define RC8CODEW_DVBSX_FECSPY_NCRVMAX0                               0x00000039
#define RC8CODEW_DVBSX_FECSPY_NCRVMAX0__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_NCRVMAX0_NCRVERIF_NCRMAX__MASK         0xFF      

/* NCRVMIN1 */
#define RC8CODEW_DVBSX_FECSPY_NCRVMIN1                               0x0000003a
#define RC8CODEW_DVBSX_FECSPY_NCRVMIN1__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_NCRVMIN1_NCRVERIF_NCRMIN__MASK         0xFF      

/* NCRVMIN0 */
#define RC8CODEW_DVBSX_FECSPY_NCRVMIN0                               0x0000003b
#define RC8CODEW_DVBSX_FECSPY_NCRVMIN0__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_NCRVMIN0_NCRVERIF_NCRMIN__MASK         0xFF      

/* NCRVABS1 */
#define RC8CODEW_DVBSX_FECSPY_NCRVABS1                               0x0000003c
#define RC8CODEW_DVBSX_FECSPY_NCRVABS1__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_NCRVABS1_NCRVERIF_NCRABS__MASK         0xFF      

/* NCRVABS0 */
#define RC8CODEW_DVBSX_FECSPY_NCRVABS0                               0x0000003d
#define RC8CODEW_DVBSX_FECSPY_NCRVABS0__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_NCRVABS0_NCRVERIF_NCRABS__MASK         0xFF      

/* NCRVCPT1 */
#define RC8CODEW_DVBSX_FECSPY_NCRVCPT1                               0x0000003e
#define RC8CODEW_DVBSX_FECSPY_NCRVCPT1__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_NCRVCPT1_NCRVERIF_NCRCPT__MASK         0xFF      

/* NCRVCPT0 */
#define RC8CODEW_DVBSX_FECSPY_NCRVCPT0                               0x0000003f
#define RC8CODEW_DVBSX_FECSPY_NCRVCPT0__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_FECSPY_NCRVCPT0_NCRVERIF_NCRCPT__MASK         0xFF      


/* Number of registers */
#define C8CODEW_DVBSX_FECSPY_REG_NBREGS                              52        

/* Number of fields */
#define C8CODEW_DVBSX_FECSPY_REG_NBFIELDS                            115       



#endif /* #ifndef _DVBSX_FECSPY_REG_INIT_H */