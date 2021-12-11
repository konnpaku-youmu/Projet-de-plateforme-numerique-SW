#include <stdint.h>                                              
                                                                 
// This file's content is created by the testvector generator    
// python script for seed = 2021.4                    
//                                                               
//  The variables are defined for the RSA                        
// encryption and decryption operations. And they are assigned   
// by the script for the generated testvector. Do not create a   
// new variable in this file.                                    
//                                                               
// When you are submitting your results, be careful to verify    
// the test vectors created for seeds from 2018.1, to 2018.5     
// To create them, run your script as:                           
//   $ python testvectors.py rsa 2018.1                          
                                                                 
// modulus                                                       
uint32_t N[32]       = {0x50f9b5cb, 0xe8a45140, 0x66214ee5, 0xd3b0aa00, 0x389c1c0f, 0x811022d5, 0x947e1061, 0xa1bef1b2, 0x5893be8b, 0x6fcf5323, 0x8d480eb7, 0xf233f7bb, 0x2a1ed1ea, 0x1bb843fa, 0xe8738ba2, 0x2d05d6f0, 0x4b9cca69, 0x0673898f, 0x74230212, 0xb3525ca4, 0xf4230d39, 0x57bd34d8, 0x194a85a9, 0xc97dddd7, 0xae023cc0, 0x6965154a, 0x81c315e0, 0xcf65b039, 0xb284ed1a, 0xf29e5434, 0x9d9f4919, 0xc5c3395d};           
                                                                 
// encryption exponent                                           
uint32_t e[32]       = {0x0000c8ef};            
uint32_t e_len       = 16;                                       
                                                                 
// decryption exponent, reduced to p and q                       
uint32_t d[32]       = {0xd369b4cf, 0x8685a00b, 0xd62c9a61, 0xd669599c, 0x15c549ce, 0xe2a0e031, 0x5d01d12c, 0xd2bb3a33, 0xe937130d, 0x35217a36, 0x2f2496b1, 0x5b67c8b5, 0xb3991612, 0x69405169, 0x4c24f35a, 0x06dfabb5, 0xc6e1d9fe, 0xfaec959c, 0xb6177834, 0x10dfb01c, 0x2b6be958, 0x2cc79277, 0x3039c0bf, 0x42a6ab9b, 0x42647b4a, 0xf78fae72, 0x5e5256bf, 0x79d5b062, 0xc366970f, 0x6ebc2a30, 0x04c401d7, 0x3234e95e};           
uint32_t d_len       =  1022;    
                                                                 
// the message                                                   
uint32_t M[32]       = {0x93d6c5e1, 0x15b3bcaa, 0xd253b721, 0x3900067f, 0xa65a6295, 0xf73854e4, 0xe3971397, 0x5ca25dc0, 0xc5c11752, 0xee162f5d, 0x73581fa5, 0xd7597eca, 0xffbf030c, 0x2711733b, 0xc2a2c2e3, 0xa8114316, 0x474c6f2e, 0x3b1a6240, 0xca450536, 0xeee40a11, 0x4a48bf90, 0xe948873d, 0xb4581cb8, 0x312611a9, 0x2d5bacd6, 0xe34c132a, 0xa13aac12, 0xbed46b59, 0x6a0b1cb6, 0x6caf655c, 0x15bc056f, 0x9000c1a4};           
                                                                 
// R mod N, and R^2 mod N, (R = 2^1024)                          
uint32_t R_N[32]     = {0xaf064a35, 0x175baebf, 0x99deb11a, 0x2c4f55ff, 0xc763e3f0, 0x7eefdd2a, 0x6b81ef9e, 0x5e410e4d, 0xa76c4174, 0x9030acdc, 0x72b7f148, 0x0dcc0844, 0xd5e12e15, 0xe447bc05, 0x178c745d, 0xd2fa290f, 0xb4633596, 0xf98c7670, 0x8bdcfded, 0x4cada35b, 0x0bdcf2c6, 0xa842cb27, 0xe6b57a56, 0x36822228, 0x51fdc33f, 0x969aeab5, 0x7e3cea1f, 0x309a4fc6, 0x4d7b12e5, 0x0d61abcb, 0x6260b6e6, 0x3a3cc6a2};        
uint32_t R2_N[32]    = {0x7397e5e8, 0xc5203a93, 0x4b4bd086, 0x00b79e38, 0xeb551035, 0x972fb574, 0x96fe11d0, 0x8243bfd2, 0x05cf2e24, 0x697c97f1, 0x7edbcd43, 0x92038e3e, 0x044b4a76, 0x7cf60ac8, 0x5d2132fd, 0x128477e8, 0x9a94933a, 0xc27e1910, 0x7c2247be, 0x452fb982, 0x4394684c, 0x05522445, 0x3c663f3c, 0xc68291bb, 0xe619c270, 0xb8b9e970, 0x6a7acb74, 0x3fb15f52, 0x355fc17b, 0xdda4d057, 0xf53c9a72, 0x8ef9172f};        
