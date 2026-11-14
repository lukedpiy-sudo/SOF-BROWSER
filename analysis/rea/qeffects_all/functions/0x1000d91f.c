// rea decompile_all
// name: __output_l
// address: 0x1000d91f
// body: available
// range: 0x1000d91f-0x1000e4a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    __output_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __output_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  byte bVar1;
  short *psVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  errno_t eVar7;
  int iVar8;
  undefined *puVar9;
  int extraout_ECX;
  uint uVar10;
  size_t sVar11;
  wchar_t *pwVar12;
  byte *pbVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  wchar_t *pwVar17;
  undefined4 uVar18;
  localeinfo_struct *plVar19;
  undefined4 local_27c;
  undefined4 local_278;
  int local_274;
  undefined4 local_270;
  uint local_268;
  int local_264;
  localeinfo_struct local_260;
  int local_258;
  char local_254;
  wchar_t *local_250;
  int local_24c;
  int local_248;
  FILE *local_244;
  byte *local_240;
  int local_23c;
  int local_238;
  int local_234;
  undefined1 local_230;
  char local_22f;
  wchar_t *local_22c;
  int local_228;
  size_t local_224;
  wchar_t *local_220;
  int local_21c;
  byte local_215;
  uint local_214;
  wchar_t local_210 [255];
  undefined2 local_11;
  uint local_8;
  
  local_8 = DAT_10027040 ^ (uint)&stack0xfffffffc;
  local_244 = _File;
  local_22c = (wchar_t *)_ArgList;
  local_24c = 0;
  local_214 = 0;
  local_238 = 0;
  local_21c = 0;
  local_234 = 0;
  local_248 = 0;
  local_23c = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_260,_Locale);
  if (_File != (FILE *)0x0) {
    if ((_File->_flag & 0x40) == 0) {
      uVar4 = __fileno(_File);
      if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
        puVar9 = &DAT_10027450;
      }
      else {
        puVar9 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_10029aa0)[(int)uVar4 >> 5]);
      }
      if ((puVar9[0x24] & 0x7f) == 0) {
        if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
          puVar9 = &DAT_10027450;
        }
        else {
          puVar9 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_10029aa0)[(int)uVar4 >> 5]);
        }
        if ((puVar9[0x24] & 0x80) == 0) goto LAB_1000da19;
      }
    }
    else {
LAB_1000da19:
      if (_Format != (char *)0x0) {
        local_215 = *_Format;
        local_228 = 0;
        local_224 = 0;
        local_250 = (wchar_t *)0x0;
        iVar8 = 0;
        while ((local_215 != 0 &&
               (pbVar13 = (byte *)(_Format + 1), local_240 = pbVar13, -1 < local_228))) {
          if ((byte)(local_215 - 0x20) < 0x59) {
            uVar4 = (int)*(char *)((int)L"mscoree.dll" + (char)local_215 + 0x14) & 0xf;
          }
          else {
            uVar4 = 0;
          }
          local_264 = (int)(char)(&DAT_1001d238)[uVar4 * 8 + iVar8] >> 4;
          switch(local_264) {
          case 0:
switchD_1000da8e_caseD_0:
            local_23c = 0;
            iVar8 = __isleadbyte_l((uint)local_215,&local_260);
            if (iVar8 != 0) {
              write_char();
              local_240 = (byte *)(_Format + 2);
              if (*pbVar13 == 0) goto LAB_1000d98a;
            }
            write_char();
            break;
          case 1:
            local_21c = -1;
            local_270 = 0;
            local_248 = 0;
            local_238 = 0;
            local_234 = 0;
            local_214 = 0;
            local_23c = 0;
            break;
          case 2:
            if (local_215 == 0x20) {
              local_214 = local_214 | 2;
            }
            else if (local_215 == 0x23) {
              local_214 = local_214 | 0x80;
            }
            else if (local_215 == 0x2b) {
              local_214 = local_214 | 1;
            }
            else if (local_215 == 0x2d) {
              local_214 = local_214 | 4;
            }
            else if (local_215 == 0x30) {
              local_214 = local_214 | 8;
            }
            break;
          case 3:
            if (local_215 == 0x2a) {
              local_22c = (wchar_t *)((int)_ArgList + 4);
              local_238 = *(int *)_ArgList;
              if (local_238 < 0) {
                local_214 = local_214 | 4;
                local_238 = -local_238;
              }
            }
            else {
              local_238 = local_238 * 10 + -0x30 + (int)(char)local_215;
            }
            break;
          case 4:
            local_21c = 0;
            break;
          case 5:
            if (local_215 == 0x2a) {
              local_22c = (wchar_t *)((int)_ArgList + 4);
              local_21c = *(int *)_ArgList;
              if (local_21c < 0) {
                local_21c = -1;
              }
            }
            else {
              local_21c = local_21c * 10 + -0x30 + (int)(char)local_215;
            }
            break;
          case 6:
            if (local_215 == 0x49) {
              bVar1 = *pbVar13;
              if ((bVar1 == 0x36) && (_Format[2] == 0x34)) {
                local_214 = local_214 | 0x8000;
                local_240 = (byte *)(_Format + 3);
              }
              else if ((bVar1 == 0x33) && (_Format[2] == 0x32)) {
                local_214 = local_214 & 0xffff7fff;
                local_240 = (byte *)(_Format + 3);
              }
              else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                       ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
                local_264 = 0;
                goto switchD_1000da8e_caseD_0;
              }
            }
            else if (local_215 == 0x68) {
              local_214 = local_214 | 0x20;
            }
            else if (local_215 == 0x6c) {
              if (*pbVar13 == 0x6c) {
                local_214 = local_214 | 0x1000;
                local_240 = (byte *)(_Format + 2);
              }
              else {
                local_214 = local_214 | 0x10;
              }
            }
            else if (local_215 == 0x77) {
              local_214 = local_214 | 0x800;
            }
            break;
          case 7:
            if ((char)local_215 < 'e') {
              if (local_215 == 100) {
LAB_1000df7c:
                local_214 = local_214 | 0x40;
LAB_1000df83:
                local_224 = 10;
LAB_1000df8d:
                if (((local_214 & 0x8000) == 0) && ((local_214 & 0x1000) == 0)) {
                  local_22c = (wchar_t *)((int)_ArgList + 4);
                  if ((local_214 & 0x20) == 0) {
                    uVar4 = *(uint *)_ArgList;
                    if ((local_214 & 0x40) == 0) {
                      uVar10 = 0;
                    }
                    else {
                      uVar10 = (int)uVar4 >> 0x1f;
                    }
                  }
                  else {
                    if ((local_214 & 0x40) == 0) {
                      uVar4 = (uint)(ushort)*(wchar_t *)_ArgList;
                    }
                    else {
                      uVar4 = (uint)*(wchar_t *)_ArgList;
                    }
                    uVar10 = (int)uVar4 >> 0x1f;
                  }
                }
                else {
                  uVar4 = *(uint *)_ArgList;
                  uVar10 = *(uint *)((int)_ArgList + 4);
                  local_22c = (wchar_t *)((int)_ArgList + 8);
                }
                if ((((local_214 & 0x40) != 0) && ((int)uVar10 < 1)) && ((int)uVar10 < 0)) {
                  bVar14 = uVar4 != 0;
                  uVar4 = -uVar4;
                  uVar10 = -(uVar10 + bVar14);
                  local_214 = local_214 | 0x100;
                }
                uVar15 = CONCAT44(uVar10,uVar4);
                if ((local_214 & 0x9000) == 0) {
                  uVar10 = 0;
                }
                if (local_21c < 0) {
                  local_21c = 1;
                }
                else {
                  local_214 = local_214 & 0xfffffff7;
                  if (0x200 < local_21c) {
                    local_21c = 0x200;
                  }
                }
                if (uVar4 == 0 && uVar10 == 0) {
                  local_234 = 0;
                }
                pwVar12 = &local_11;
                while( true ) {
                  uVar4 = uVar10;
                  iVar8 = local_21c + -1;
                  if ((local_21c < 1) && ((uint)uVar15 == 0 && uVar4 == 0)) break;
                  local_21c = iVar8;
                  uVar15 = __aulldvrm((uint)uVar15,uVar4,local_224,(int)local_224 >> 0x1f);
                  iVar8 = extraout_ECX + 0x30;
                  if (0x39 < iVar8) {
                    iVar8 = iVar8 + local_24c;
                  }
                  *(char *)pwVar12 = (char)iVar8;
                  pwVar12 = (wchar_t *)((int)pwVar12 + -1);
                  uVar10 = (uint)((ulonglong)uVar15 >> 0x20);
                  local_268 = uVar4;
                }
                local_224 = (int)&local_11 + -(int)pwVar12;
                local_220 = (wchar_t *)((int)pwVar12 + 1);
                local_21c = iVar8;
                if (((local_214 & 0x200) != 0) && ((local_224 == 0 || (*(char *)local_220 != '0'))))
                {
                  *(char *)pwVar12 = '0';
                  local_224 = (int)&local_11 + -(int)pwVar12 + 1;
                  local_220 = pwVar12;
                }
              }
              else if ((char)local_215 < 'T') {
                if (local_215 == 0x53) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
                  goto LAB_1000dda8;
                }
                if (local_215 == 0x41) {
LAB_1000dd27:
                  local_215 = local_215 + 0x20;
                  local_270 = 1;
LAB_1000dd3a:
                  local_214 = local_214 | 0x40;
                  local_268 = 0x200;
                  pwVar12 = local_210;
                  uVar4 = local_268;
                  pwVar17 = local_210;
                  if (local_21c < 0) {
                    local_21c = 6;
                  }
                  else if (local_21c == 0) {
                    if (local_215 == 0x67) {
                      local_21c = 1;
                    }
                  }
                  else {
                    if (0x200 < local_21c) {
                      local_21c = 0x200;
                    }
                    if (0xa3 < local_21c) {
                      uVar4 = local_21c + 0x15d;
                      local_220 = local_210;
                      local_250 = __malloc_crt(uVar4);
                      pwVar12 = local_250;
                      pwVar17 = local_250;
                      if (local_250 == (wchar_t *)0x0) {
                        local_21c = 0xa3;
                        pwVar12 = local_210;
                        uVar4 = local_268;
                        pwVar17 = local_220;
                      }
                    }
                  }
                  local_220 = pwVar17;
                  local_268 = uVar4;
                  local_27c = *(undefined4 *)_ArgList;
                  local_22c = (wchar_t *)((int)_ArgList + 8);
                  local_278 = *(undefined4 *)((int)_ArgList + 4);
                  plVar19 = &local_260;
                  iVar5 = (int)(char)local_215;
                  puVar16 = &local_27c;
                  pwVar17 = pwVar12;
                  uVar4 = local_268;
                  iVar8 = local_21c;
                  uVar18 = local_270;
                  pcVar6 = DecodePointer(PTR_LAB_10027d70);
                  (*pcVar6)(puVar16,pwVar17,uVar4,iVar5,iVar8,uVar18,plVar19);
                  uVar4 = local_214 & 0x80;
                  if ((uVar4 != 0) && (local_21c == 0)) {
                    plVar19 = &local_260;
                    pwVar17 = pwVar12;
                    pcVar6 = DecodePointer(PTR_LAB_10027d7c);
                    (*pcVar6)(pwVar17,plVar19);
                  }
                  if ((local_215 == 0x67) && (uVar4 == 0)) {
                    plVar19 = &local_260;
                    pwVar17 = pwVar12;
                    pcVar6 = DecodePointer(PTR_LAB_10027d78);
                    (*pcVar6)(pwVar17,plVar19);
                  }
                  if ((char)*pwVar12 == '-') {
                    local_214 = local_214 | 0x100;
                    local_220 = (wchar_t *)((int)pwVar12 + 1);
                    pwVar12 = local_220;
                  }
LAB_1000deda:
                  local_224 = _strlen((char *)pwVar12);
                }
                else if (local_215 == 0x43) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
LAB_1000de1b:
                  local_22c = (wchar_t *)((int)_ArgList + 4);
                  if ((local_214 & 0x810) == 0) {
                    local_210[0]._0_1_ = (char)*(wchar_t *)_ArgList;
                    local_224 = 1;
                  }
                  else {
                    eVar7 = _wctomb_s((int *)&local_224,(char *)local_210,0x200,*(wchar_t *)_ArgList
                                     );
                    if (eVar7 != 0) {
                      local_248 = 1;
                    }
                  }
                  local_220 = local_210;
                }
                else if ((local_215 == 0x45) || (local_215 == 0x47)) goto LAB_1000dd27;
              }
              else {
                if (local_215 == 0x58) goto LAB_1000e0da;
                if (local_215 == 0x5a) {
                  psVar2 = *(short **)_ArgList;
                  local_22c = (wchar_t *)((int)_ArgList + 4);
                  pwVar12 = (wchar_t *)PTR_s__null__100271c0;
                  local_220 = (wchar_t *)PTR_s__null__100271c0;
                  if ((psVar2 == (short *)0x0) ||
                     (pwVar17 = *(wchar_t **)(psVar2 + 2), pwVar17 == (wchar_t *)0x0))
                  goto LAB_1000deda;
                  local_224 = (size_t)*psVar2;
                  local_220 = pwVar17;
                  if ((local_214 & 0x800) == 0) {
                    local_23c = 0;
                  }
                  else {
                    local_224 = (int)local_224 / 2;
                    local_23c = 1;
                  }
                }
                else {
                  if (local_215 == 0x61) goto LAB_1000dd3a;
                  if (local_215 == 99) goto LAB_1000de1b;
                }
              }
LAB_1000e2b3:
              if (local_248 == 0) {
                if ((local_214 & 0x40) != 0) {
                  if ((local_214 & 0x100) == 0) {
                    if ((local_214 & 1) == 0) {
                      if ((local_214 & 2) == 0) goto LAB_1000e2fc;
                      local_230 = 0x20;
                    }
                    else {
                      local_230 = 0x2b;
                    }
                  }
                  else {
                    local_230 = 0x2d;
                  }
                  local_234 = 1;
                }
LAB_1000e2fc:
                uVar10 = (local_238 - local_224) - local_234;
                local_268 = uVar10;
                uVar4 = uVar10;
                if ((local_214 & 0xc) == 0) {
                  do {
                    if ((int)uVar4 < 1) break;
                    uVar4 = uVar4 - 1;
                    write_char();
                  } while (local_228 != -1);
                }
                write_string();
                if (((local_214 & 8) != 0) && ((local_214 & 4) == 0)) {
                  do {
                    if ((int)uVar10 < 1) break;
                    uVar10 = uVar10 - 1;
                    write_char();
                  } while (local_228 != -1);
                }
                if ((local_23c == 0) ||
                   (sVar11 = local_224, pwVar12 = local_220, (int)local_224 < 1)) {
                  write_string();
                }
                else {
                  do {
                    sVar11 = sVar11 - 1;
                    eVar7 = _wctomb_s(&local_274,(char *)((int)&local_11 + 1),6,*pwVar12);
                    if ((eVar7 != 0) || (local_274 == 0)) {
                      local_228 = -1;
                      break;
                    }
                    write_string();
                    pwVar12 = pwVar12 + 1;
                  } while (sVar11 != 0);
                }
                if ((-1 < local_228) && (uVar4 = local_268, (local_214 & 4) != 0)) {
                  do {
                    if ((int)uVar4 < 1) break;
                    write_char();
                    uVar4 = uVar4 - 1;
                  } while (local_228 != -1);
                }
              }
            }
            else {
              if ('p' < (char)local_215) {
                if (local_215 == 0x73) {
LAB_1000dda8:
                  iVar8 = local_21c;
                  if (local_21c == -1) {
                    iVar8 = 0x7fffffff;
                  }
                  local_22c = (wchar_t *)((int)_ArgList + 4);
                  local_220 = *(wchar_t **)_ArgList;
                  if ((local_214 & 0x810) == 0) {
                    pwVar12 = local_220;
                    if (local_220 == (wchar_t *)0x0) {
                      pwVar12 = (wchar_t *)PTR_s__null__100271c0;
                      local_220 = (wchar_t *)PTR_s__null__100271c0;
                    }
                    for (; (iVar8 != 0 && (iVar8 = iVar8 + -1, (char)*pwVar12 != '\0'));
                        pwVar12 = (wchar_t *)((int)pwVar12 + 1)) {
                    }
                    local_224 = (int)pwVar12 - (int)local_220;
                  }
                  else {
                    if (local_220 == (wchar_t *)0x0) {
                      local_220 = (wchar_t *)PTR_u__null__100271c4;
                    }
                    local_23c = 1;
                    for (pwVar12 = local_220;
                        (iVar8 != 0 && (iVar8 = iVar8 + -1, *pwVar12 != L'\0'));
                        pwVar12 = pwVar12 + 1) {
                    }
                    local_224 = (int)pwVar12 - (int)local_220 >> 1;
                  }
                  goto LAB_1000e2b3;
                }
                if (local_215 == 0x75) goto LAB_1000df83;
                if (local_215 != 0x78) goto LAB_1000e2b3;
                local_24c = 0x27;
LAB_1000e106:
                local_224 = 0x10;
                if ((local_214 & 0x80) != 0) {
                  local_22f = (char)local_24c + 'Q';
                  local_230 = 0x30;
                  local_234 = 2;
                }
                goto LAB_1000df8d;
              }
              if (local_215 == 0x70) {
                local_21c = 8;
LAB_1000e0da:
                local_24c = 7;
                goto LAB_1000e106;
              }
              if ((char)local_215 < 'e') goto LAB_1000e2b3;
              if ((char)local_215 < 'h') goto LAB_1000dd3a;
              if (local_215 == 0x69) goto LAB_1000df7c;
              if (local_215 != 0x6e) {
                if (local_215 != 0x6f) goto LAB_1000e2b3;
                local_224 = 8;
                if ((local_214 & 0x80) != 0) {
                  local_214 = local_214 | 0x200;
                }
                goto LAB_1000df8d;
              }
              piVar3 = *(int **)_ArgList;
              local_22c = (wchar_t *)((int)_ArgList + 4);
              iVar8 = __get_printf_count_output();
              if (iVar8 == 0) goto LAB_1000d98a;
              if ((local_214 & 0x20) == 0) {
                *piVar3 = local_228;
              }
              else {
                *(undefined2 *)piVar3 = (undefined2)local_228;
              }
              local_248 = 1;
            }
            if (local_250 != (wchar_t *)0x0) {
              _free(local_250);
              local_250 = (wchar_t *)0x0;
            }
          }
          local_215 = *local_240;
          iVar8 = local_264;
          _Format = (char *)local_240;
          _ArgList = (va_list)local_22c;
        }
        if (local_254 != '\0') {
          *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
        }
        goto LAB_1000e499;
      }
    }
  }
LAB_1000d98a:
  piVar3 = __errno();
  *piVar3 = 0x16;
  FUN_1000d7dd();
  if (local_254 != '\0') {
    *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
  }
LAB_1000e499:
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
}

