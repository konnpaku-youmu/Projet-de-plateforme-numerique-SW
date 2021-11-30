#include <stdint.h>                                              
                                                                 
// This file's content is created by the testvector generator    
// python script for seed = 2020                    
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
uint32_t N[32]       = {0x5475ed99, 0xdd171789, 0x2ce4ff7e, 0xeaf25a22, 0x5028c484, 0xc1f82829, 0xa34a82ca, 0xbd3f4b53, 0x12c33f19, 0xa1b7fbe1, 0x50d25213, 0xa911556e, 0x1256fe3b, 0x70672c29, 0x962f3e93, 0xc745a57b, 0x366ea175, 0x7cda38fa, 0xca2af608, 0xed424c27, 0xfc56f899, 0x185f17a7, 0xb27ea851, 0xdad6e6d0, 0x5c7b4a5e, 0x172a6f89, 0xcc713ae5, 0x8f06ddfe, 0x6ea70899, 0xf3d4b00a, 0xa33e222e, 0xb3cf31f2};           
                                                                 
// encryption exponent                                           
uint32_t e[32]       = {0x0000ce7b};            
uint32_t e_len       = 16;                                       
                                                                 
// decryption exponent, reduced to p and q                       
uint32_t d[32]       = {0x472e75ff, 0x6f48fb39, 0xa92c31c6, 0x5f8880bb, 0x6472408f, 0x36daa10a, 0x5910b3bb, 0x02e718f2, 0x776fa566, 0x895a9c1b, 0x3ad84e3d, 0xe2aad0d4, 0x923e7d03, 0x697b465a, 0x7d21fb0a, 0x49c612b0, 0xcb3b56ca, 0xbd851de3, 0x6d9b4af3, 0xd464e155, 0x3369f5b3, 0x61e7a0db, 0x82b68bf0, 0xc7e9ebba, 0xf8f5e19e, 0x1c2eecb6, 0xdc12beaa, 0x05696b9d, 0x44a7621e, 0x4029444e, 0x0ecd6190, 0x0d17d2f8};           
uint32_t d_len       =  1020;    
                                                                 
// the message                                                   
uint32_t M[32]       = {0x07ffeff2, 0xd5e1252c, 0x06bfa5c7, 0x9a3a4f3d, 0x527ae169, 0x41ce3d21, 0xaa84918c, 0x05d6a549, 0x97fdf3e2, 0xc58cfc11, 0x39934953, 0x3761f954, 0x3f5f3fd0, 0xcba4c68e, 0x74d06c4f, 0xa19f7439, 0x1a7519ff, 0xb0a592fe, 0x819da1b8, 0x4235ff00, 0x712e10ba, 0xbcdfc65b, 0x63eaca75, 0xd8afd026, 0xacc9d209, 0x7e412044, 0x38e1b1cb, 0x013642c8, 0x6be1f1f9, 0x8922c3eb, 0x567213f7, 0x824faed8};           
                                                                 
// R mod N, and R^2 mod N, (R = 2^1024)                          
uint32_t R_N[32]     = {0xab8a1267, 0x22e8e876, 0xd31b0081, 0x150da5dd, 0xafd73b7b, 0x3e07d7d6, 0x5cb57d35, 0x42c0b4ac, 0xed3cc0e6, 0x5e48041e, 0xaf2dadec, 0x56eeaa91, 0xeda901c4, 0x8f98d3d6, 0x69d0c16c, 0x38ba5a84, 0xc9915e8a, 0x8325c705, 0x35d509f7, 0x12bdb3d8, 0x03a90766, 0xe7a0e858, 0x4d8157ae, 0x2529192f, 0xa384b5a1, 0xe8d59076, 0x338ec51a, 0x70f92201, 0x9158f766, 0x0c2b4ff5, 0x5cc1ddd1, 0x4c30ce0d};        
uint32_t R2_N[32]    = {0xdccc11cf, 0x2d5640c2, 0x639061ce, 0xfd0e7e30, 0x85a73ed8, 0x3f111992, 0x2a15c29a, 0xd2ee6ee8, 0x74ea26ef, 0xfad9dfc1, 0xa6b3220e, 0x69f1b6c3, 0x3b668315, 0xd462cdbb, 0x0286ffde, 0xff30bd76, 0xb0ff6f32, 0x77c36c82, 0x44732ff7, 0x9ac8a532, 0x63ff74e7, 0xd41f53a3, 0x03bd81ae, 0xdacfc4a8, 0xd9c5398f, 0x11f41c85, 0x48ab5cde, 0xa6d6ef2e, 0x5eba8679, 0x1b8f2824, 0x934f3d7c, 0xb3bfbd25};        
