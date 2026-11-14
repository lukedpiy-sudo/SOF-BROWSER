// rea decompile_all
// name: FUN_10001d10
// address: 0x10001d10
// body: available
// range: 0x10001d10-0x1000696b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001d10(void)

{
  char *pcVar1;
  char *pcVar2;
  CHAR local_408 [1024];
  uint local_8;
  
  local_8 = DAT_10027040 ^ (uint)&stack0xfffffffc;
  GetSystemDirectoryA(local_408,0x400);
  _strcat_s(local_408,0x400,"\\opengl32.dll");
  pcVar1 = "Loading \"%s\": ";
  (*(code *)PTR_FUN_10028344)("Loading \"%s\": ",local_408);
  FUN_10001bf0(pcVar1);
  DAT_10029a88 = LoadLibraryA(local_408);
  if (DAT_10029a88 == (HMODULE)0x0) {
    pcVar1 = "failed\n";
    (*(code *)PTR_FUN_10028344)();
    FUN_10001bf0(pcVar1);
    DAT_10029a8c = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  pcVar1 = "success\n";
  (*(code *)PTR_FUN_10028344)();
  FUN_10001bf0(pcVar1);
  pcVar1 = "Loading functions: ";
  (*(code *)PTR_FUN_10028344)();
  FUN_10001bf0(pcVar1);
  DAT_10029498 = GetProcAddress(DAT_10029a88,"glAccum");
  if (DAT_10029498 == (FARPROC)0x0) {
    pcVar1 = "failed\n";
    (*(code *)PTR_FUN_10028344)();
    FUN_10001bf0(pcVar1);
    pcVar1 = "glAccum";
  }
  else {
    DAT_1002949c = GetProcAddress(DAT_10029a88,"glAlphaFunc");
    if (DAT_1002949c == (FARPROC)0x0) {
      pcVar1 = "failed\n";
      (*(code *)PTR_FUN_10028344)();
      FUN_10001bf0(pcVar1);
      pcVar1 = "glAlphaFunc";
    }
    else {
      _DAT_100294a0 = GetProcAddress(DAT_10029a88,"glAreTexturesResident");
      if (_DAT_100294a0 == (FARPROC)0x0) {
        pcVar1 = "failed\n";
        (*(code *)PTR_FUN_10028344)();
        FUN_10001bf0(pcVar1);
        pcVar1 = "glAreTexturesResident";
      }
      else {
        _DAT_100294a4 = GetProcAddress(DAT_10029a88,"glArrayElement");
        if (_DAT_100294a4 == (FARPROC)0x0) {
          pcVar1 = "failed\n";
          (*(code *)PTR_FUN_10028344)();
          FUN_10001bf0(pcVar1);
          pcVar1 = "glArrayElement";
        }
        else {
          DAT_100294a8 = GetProcAddress(DAT_10029a88,"glBegin");
          if (DAT_100294a8 == (FARPROC)0x0) {
            pcVar1 = "failed\n";
            (*(code *)PTR_FUN_10028344)();
            FUN_10001bf0(pcVar1);
            pcVar1 = "glBegin";
          }
          else {
            DAT_100294ac = GetProcAddress(DAT_10029a88,"glBindTexture");
            if (DAT_100294ac == (FARPROC)0x0) {
              pcVar1 = "failed\n";
              (*(code *)PTR_FUN_10028344)();
              FUN_10001bf0(pcVar1);
              pcVar1 = "glBindTexture";
            }
            else {
              DAT_100294b0 = GetProcAddress(DAT_10029a88,"glBitmap");
              if (DAT_100294b0 == (FARPROC)0x0) {
                pcVar1 = "failed\n";
                (*(code *)PTR_FUN_10028344)();
                FUN_10001bf0(pcVar1);
                pcVar1 = "glBitmap";
              }
              else {
                DAT_100294b4 = GetProcAddress(DAT_10029a88,"glBlendFunc");
                if (DAT_100294b4 == (FARPROC)0x0) {
                  pcVar1 = "failed\n";
                  (*(code *)PTR_FUN_10028344)();
                  FUN_10001bf0(pcVar1);
                  pcVar1 = "glBlendFunc";
                }
                else {
                  _DAT_100294b8 = GetProcAddress(DAT_10029a88,"glCallList");
                  if (_DAT_100294b8 == (FARPROC)0x0) {
                    pcVar1 = "failed\n";
                    (*(code *)PTR_FUN_10028344)();
                    FUN_10001bf0(pcVar1);
                    pcVar1 = "glCallList";
                  }
                  else {
                    _DAT_100294bc = GetProcAddress(DAT_10029a88,"glCallLists");
                    if (_DAT_100294bc == (FARPROC)0x0) {
                      pcVar1 = "failed\n";
                      (*(code *)PTR_FUN_10028344)();
                      FUN_10001bf0(pcVar1);
                      pcVar1 = "glCallLists";
                    }
                    else {
                      DAT_100294c0 = GetProcAddress(DAT_10029a88,"glClear");
                      if (DAT_100294c0 == (FARPROC)0x0) {
                        pcVar1 = "failed\n";
                        (*(code *)PTR_FUN_10028344)();
                        FUN_10001bf0(pcVar1);
                        pcVar1 = "glClear";
                      }
                      else {
                        DAT_100294c4 = GetProcAddress(DAT_10029a88,"glClearAccum");
                        if (DAT_100294c4 == (FARPROC)0x0) {
                          pcVar1 = "failed\n";
                          (*(code *)PTR_FUN_10028344)();
                          FUN_10001bf0(pcVar1);
                          pcVar1 = "glClearAccum";
                        }
                        else {
                          DAT_100294c8 = GetProcAddress(DAT_10029a88,"glClearColor");
                          if (DAT_100294c8 == (FARPROC)0x0) {
                            pcVar1 = "failed\n";
                            (*(code *)PTR_FUN_10028344)();
                            FUN_10001bf0(pcVar1);
                            pcVar1 = "glClearColor";
                          }
                          else {
                            DAT_100294cc = GetProcAddress(DAT_10029a88,"glClearDepth");
                            if (DAT_100294cc == (FARPROC)0x0) {
                              pcVar1 = "failed\n";
                              (*(code *)PTR_FUN_10028344)();
                              FUN_10001bf0(pcVar1);
                              pcVar1 = "glClearDepth";
                            }
                            else {
                              DAT_100294d0 = GetProcAddress(DAT_10029a88,"glClearIndex");
                              if (DAT_100294d0 == (FARPROC)0x0) {
                                pcVar1 = "failed\n";
                                (*(code *)PTR_FUN_10028344)();
                                FUN_10001bf0(pcVar1);
                                pcVar1 = "glClearIndex";
                              }
                              else {
                                _DAT_100294d4 = GetProcAddress(DAT_10029a88,"glClearStencil");
                                if (_DAT_100294d4 == (FARPROC)0x0) {
                                  pcVar1 = "failed\n";
                                  (*(code *)PTR_FUN_10028344)();
                                  FUN_10001bf0(pcVar1);
                                  pcVar1 = "glClearStencil";
                                }
                                else {
                                  _DAT_100294d8 = GetProcAddress(DAT_10029a88,"glClipPlane");
                                  if (_DAT_100294d8 == (FARPROC)0x0) {
                                    pcVar1 = "failed\n";
                                    (*(code *)PTR_FUN_10028344)();
                                    FUN_10001bf0(pcVar1);
                                    pcVar1 = "glClipPlane";
                                  }
                                  else {
                                    _DAT_100294dc = GetProcAddress(DAT_10029a88,"glColor3b");
                                    if (_DAT_100294dc == (FARPROC)0x0) {
                                      pcVar1 = "failed\n";
                                      (*(code *)PTR_FUN_10028344)();
                                      FUN_10001bf0(pcVar1);
                                      pcVar1 = "glColor3b";
                                    }
                                    else {
                                      _DAT_100294e0 = GetProcAddress(DAT_10029a88,"glColor3bv");
                                      if (_DAT_100294e0 == (FARPROC)0x0) {
                                        pcVar1 = "failed\n";
                                        (*(code *)PTR_FUN_10028344)();
                                        FUN_10001bf0(pcVar1);
                                        pcVar1 = "glColor3bv";
                                      }
                                      else {
                                        DAT_100294e4 = GetProcAddress(DAT_10029a88,"glColor3d");
                                        if (DAT_100294e4 == (FARPROC)0x0) {
                                          pcVar1 = "failed\n";
                                          (*(code *)PTR_FUN_10028344)();
                                          FUN_10001bf0(pcVar1);
                                          pcVar1 = "glColor3d";
                                        }
                                        else {
                                          _DAT_100294e8 = GetProcAddress(DAT_10029a88,"glColor3dv");
                                          if (_DAT_100294e8 == (FARPROC)0x0) {
                                            pcVar1 = "failed\n";
                                            (*(code *)PTR_FUN_10028344)();
                                            FUN_10001bf0(pcVar1);
                                            pcVar1 = "glColor3dv";
                                          }
                                          else {
                                            DAT_100294ec = GetProcAddress(DAT_10029a88,"glColor3f");
                                            if (DAT_100294ec == (FARPROC)0x0) {
                                              pcVar1 = "failed\n";
                                              (*(code *)PTR_FUN_10028344)();
                                              FUN_10001bf0(pcVar1);
                                              pcVar1 = "glColor3f";
                                            }
                                            else {
                                              _DAT_100294f0 =
                                                   GetProcAddress(DAT_10029a88,"glColor3fv");
                                              if (_DAT_100294f0 == (FARPROC)0x0) {
                                                pcVar1 = "failed\n";
                                                (*(code *)PTR_FUN_10028344)();
                                                FUN_10001bf0(pcVar1);
                                                pcVar1 = "glColor3fv";
                                              }
                                              else {
                                                _DAT_100294f4 =
                                                     GetProcAddress(DAT_10029a88,"glColor3i");
                                                if (_DAT_100294f4 == (FARPROC)0x0) {
                                                  pcVar1 = "failed\n";
                                                  (*(code *)PTR_FUN_10028344)();
                                                  FUN_10001bf0(pcVar1);
                                                  pcVar1 = "glColor3i";
                                                }
                                                else {
                                                  _DAT_100294f8 =
                                                       GetProcAddress(DAT_10029a88,"glColor3iv");
                                                  if (_DAT_100294f8 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glColor3iv";
                                                  }
                                                  else {
                                                    _DAT_100294fc =
                                                         GetProcAddress(DAT_10029a88,"glColor3s");
                                                    if (_DAT_100294fc == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glColor3s";
                                                    }
                                                    else {
                                                      _DAT_10029500 =
                                                           GetProcAddress(DAT_10029a88,"glColor3sv")
                                                      ;
                                                      if (_DAT_10029500 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glColor3sv";
                                                      }
                                                      else {
                                                        _DAT_10029504 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glColor3ub");
                                                        if (_DAT_10029504 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glColor3ub";
                                                        }
                                                        else {
                                                          _DAT_10029508 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glColor3ubv");
                                                          if (_DAT_10029508 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glColor3ubv";
                                                          }
                                                          else {
                                                            _DAT_1002950c =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glColor3ui");
                                                            if (_DAT_1002950c == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glColor3ui";
                                                            }
                                                            else {
                                                              _DAT_10029510 =
                                                                   GetProcAddress(DAT_10029a88,
                                                                                  "glColor3uiv");
                                                              if (_DAT_10029510 == (FARPROC)0x0) {
                                                                pcVar1 = "failed\n";
                                                                (*(code *)PTR_FUN_10028344)();
                                                                FUN_10001bf0(pcVar1);
                                                                pcVar1 = "glColor3uiv";
                                                              }
                                                              else {
                                                                _DAT_10029514 =
                                                                     GetProcAddress(DAT_10029a88,
                                                                                    "glColor3us");
                                                                if (_DAT_10029514 == (FARPROC)0x0) {
                                                                  pcVar1 = "failed\n";
                                                                  (*(code *)PTR_FUN_10028344)();
                                                                  FUN_10001bf0(pcVar1);
                                                                  pcVar1 = "glColor3us";
                                                                }
                                                                else {
                                                                  _DAT_10029518 =
                                                                       GetProcAddress(DAT_10029a88,
                                                                                      "glColor3usv")
                                                                  ;
                                                                  if (_DAT_10029518 == (FARPROC)0x0)
                                                                  {
                                                                    pcVar1 = "failed\n";
                                                                    (*(code *)PTR_FUN_10028344)();
                                                                    FUN_10001bf0(pcVar1);
                                                                    pcVar1 = "glColor3usv";
                                                                  }
                                                                  else {
                                                                    _DAT_1002951c =
                                                                         GetProcAddress(DAT_10029a88
                                                                                        ,"glColor4b"
                                                                                       );
                                                                    if (_DAT_1002951c ==
                                                                        (FARPROC)0x0) {
                                                                      pcVar1 = "failed\n";
                                                                      (*(code *)PTR_FUN_10028344)();
                                                                      FUN_10001bf0(pcVar1);
                                                                      pcVar1 = "glColor4b";
                                                                    }
                                                                    else {
                                                                      _DAT_10029520 =
                                                                           GetProcAddress(
                                                  DAT_10029a88,"glColor4bv");
                                                  if (_DAT_10029520 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glColor4bv";
                                                  }
                                                  else {
                                                    DAT_10029524 = GetProcAddress(DAT_10029a88,
                                                                                  "glColor4d");
                                                    if (DAT_10029524 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glColor4d";
                                                    }
                                                    else {
                                                      _DAT_10029528 =
                                                           GetProcAddress(DAT_10029a88,"glColor4dv")
                                                      ;
                                                      if (_DAT_10029528 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glColor4dv";
                                                      }
                                                      else {
                                                        DAT_1002952c = GetProcAddress(DAT_10029a88,
                                                                                      "glColor4f");
                                                        if (DAT_1002952c == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glColor4f";
                                                        }
                                                        else {
                                                          DAT_10029530 = GetProcAddress(DAT_10029a88
                                                                                        ,
                                                  "glColor4fv");
                                                  if (DAT_10029530 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glColor4fv";
                                                  }
                                                  else {
                                                    _DAT_10029534 =
                                                         GetProcAddress(DAT_10029a88,"glColor4i");
                                                    if (_DAT_10029534 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glColor4i";
                                                    }
                                                    else {
                                                      _DAT_10029538 =
                                                           GetProcAddress(DAT_10029a88,"glColor4iv")
                                                      ;
                                                      if (_DAT_10029538 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glColor4iv";
                                                      }
                                                      else {
                                                        _DAT_1002953c =
                                                             GetProcAddress(DAT_10029a88,"glColor4s"
                                                                           );
                                                        if (_DAT_1002953c == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glColor4s";
                                                        }
                                                        else {
                                                          _DAT_10029540 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glColor4sv");
                                                          if (_DAT_10029540 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glColor4sv";
                                                          }
                                                          else {
                                                            _DAT_10029544 =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glColor4ub");
                                                            if (_DAT_10029544 == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glColor4ub";
                                                            }
                                                            else {
                                                              _DAT_10029548 =
                                                                   GetProcAddress(DAT_10029a88,
                                                                                  "glColor4ubv");
                                                              if (_DAT_10029548 == (FARPROC)0x0) {
                                                                pcVar1 = "failed\n";
                                                                (*(code *)PTR_FUN_10028344)();
                                                                FUN_10001bf0(pcVar1);
                                                                pcVar1 = "glColor4ubv";
                                                              }
                                                              else {
                                                                _DAT_1002954c =
                                                                     GetProcAddress(DAT_10029a88,
                                                                                    "glColor4ui");
                                                                if (_DAT_1002954c == (FARPROC)0x0) {
                                                                  pcVar1 = "failed\n";
                                                                  (*(code *)PTR_FUN_10028344)();
                                                                  FUN_10001bf0(pcVar1);
                                                                  pcVar1 = "glColor4ui";
                                                                }
                                                                else {
                                                                  _DAT_10029550 =
                                                                       GetProcAddress(DAT_10029a88,
                                                                                      "glColor4uiv")
                                                                  ;
                                                                  if (_DAT_10029550 == (FARPROC)0x0)
                                                                  {
                                                                    pcVar1 = "failed\n";
                                                                    (*(code *)PTR_FUN_10028344)();
                                                                    FUN_10001bf0(pcVar1);
                                                                    pcVar1 = "glColor4uiv";
                                                                  }
                                                                  else {
                                                                    _DAT_10029554 =
                                                                         GetProcAddress(DAT_10029a88
                                                                                        ,
                                                  "glColor4us");
                                                  if (_DAT_10029554 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glColor4us";
                                                  }
                                                  else {
                                                    _DAT_10029558 =
                                                         GetProcAddress(DAT_10029a88,"glColor4usv");
                                                    if (_DAT_10029558 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glColor4usv";
                                                    }
                                                    else {
                                                      _DAT_1002955c =
                                                           GetProcAddress(DAT_10029a88,"glColorMask"
                                                                         );
                                                      if (_DAT_1002955c == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glColorMask";
                                                      }
                                                      else {
                                                        _DAT_10029560 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glColorMaterial");
                                                        if (_DAT_10029560 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glColorMaterial";
                                                        }
                                                        else {
                                                          _DAT_10029564 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glColorPointer");
                                                          if (_DAT_10029564 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glColorPointer";
                                                          }
                                                          else {
                                                            _DAT_10029568 =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glCopyPixels");
                                                            if (_DAT_10029568 == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glCopyPixels";
                                                            }
                                                            else {
                                                              _DAT_1002956c =
                                                                   GetProcAddress(DAT_10029a88,
                                                                                  "glCopyTexImage1D"
                                                                                 );
                                                              if (_DAT_1002956c == (FARPROC)0x0) {
                                                                pcVar1 = "failed\n";
                                                                (*(code *)PTR_FUN_10028344)();
                                                                FUN_10001bf0(pcVar1);
                                                                pcVar1 = "glCopyTexImage1D";
                                                              }
                                                              else {
                                                                _DAT_10029570 =
                                                                     GetProcAddress(DAT_10029a88,
                                                                                                                                                                        
                                                  "glCopyTexImage2D");
                                                  if (_DAT_10029570 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glCopyTexImage2D";
                                                  }
                                                  else {
                                                    _DAT_10029574 =
                                                         GetProcAddress(DAT_10029a88,
                                                                        "glCopyTexSubImage1D");
                                                    if (_DAT_10029574 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glCopyTexSubImage1D";
                                                    }
                                                    else {
                                                      DAT_10029578 = GetProcAddress(DAT_10029a88,
                                                                                                                                                                        
                                                  "glCopyTexSubImage2D");
                                                  if (DAT_10029578 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glCopyTexSubImage2D";
                                                  }
                                                  else {
                                                    _DAT_1002957c =
                                                         GetProcAddress(DAT_10029a88,"glCullFace");
                                                    if (_DAT_1002957c == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glCullFace";
                                                    }
                                                    else {
                                                      _DAT_10029580 =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "glDeleteLists");
                                                      if (_DAT_10029580 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glDeleteLists";
                                                      }
                                                      else {
                                                        DAT_10029584 = GetProcAddress(DAT_10029a88,
                                                                                                                                                                            
                                                  "glDeleteTextures");
                                                  if (DAT_10029584 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glDeleteTextures";
                                                  }
                                                  else {
                                                    DAT_10029588 = GetProcAddress(DAT_10029a88,
                                                                                  "glDepthFunc");
                                                    if (DAT_10029588 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glDepthFunc";
                                                    }
                                                    else {
                                                      DAT_1002958c = GetProcAddress(DAT_10029a88,
                                                                                    "glDepthMask");
                                                      if (DAT_1002958c == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glDepthMask";
                                                      }
                                                      else {
                                                        DAT_10029590 = GetProcAddress(DAT_10029a88,
                                                                                      "glDepthRange"
                                                                                     );
                                                        if (DAT_10029590 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glDepthRange";
                                                        }
                                                        else {
                                                          DAT_10029594 = GetProcAddress(DAT_10029a88
                                                                                        ,"glDisable"
                                                                                       );
                                                          if (DAT_10029594 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glDisable";
                                                          }
                                                          else {
                                                            _DAT_10029598 =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                                                                                                
                                                  "glDisableClientState");
                                                  if (_DAT_10029598 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glDisableClientState";
                                                  }
                                                  else {
                                                    _DAT_1002959c =
                                                         GetProcAddress(DAT_10029a88,"glDrawArrays")
                                                    ;
                                                    if (_DAT_1002959c == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glDrawArrays";
                                                    }
                                                    else {
                                                      _DAT_100295a0 =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "glDrawBuffer");
                                                      if (_DAT_100295a0 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glDrawBuffer";
                                                      }
                                                      else {
                                                        _DAT_100295a4 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glDrawElements");
                                                        if (_DAT_100295a4 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glDrawElements";
                                                        }
                                                        else {
                                                          _DAT_100295a8 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glDrawPixels");
                                                          if (_DAT_100295a8 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glDrawPixels";
                                                          }
                                                          else {
                                                            _DAT_100295ac =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glEdgeFlag");
                                                            if (_DAT_100295ac == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glEdgeFlag";
                                                            }
                                                            else {
                                                              _DAT_100295b0 =
                                                                   GetProcAddress(DAT_10029a88,
                                                                                                                                                                    
                                                  "glEdgeFlagPointer");
                                                  if (_DAT_100295b0 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glEdgeFlagPointer";
                                                  }
                                                  else {
                                                    _DAT_100295b4 =
                                                         GetProcAddress(DAT_10029a88,"glEdgeFlagv");
                                                    if (_DAT_100295b4 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glEdgeFlagv";
                                                    }
                                                    else {
                                                      DAT_100295b8 = GetProcAddress(DAT_10029a88,
                                                                                    "glEnable");
                                                      if (DAT_100295b8 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glEnable";
                                                      }
                                                      else {
                                                        _DAT_100295bc =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glEnableClientState");
                                                        if (_DAT_100295bc == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glEnableClientState";
                                                        }
                                                        else {
                                                          DAT_100295c0 = GetProcAddress(DAT_10029a88
                                                                                        ,"glEnd");
                                                          if (DAT_100295c0 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glEnd";
                                                          }
                                                          else {
                                                            _DAT_100295c4 =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glEndList");
                                                            if (_DAT_100295c4 == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glEndList";
                                                            }
                                                            else {
                                                              DAT_100295c8 = GetProcAddress(
                                                  DAT_10029a88,"glEvalCoord1d");
                                                  if (DAT_100295c8 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glEvalCoord1d";
                                                  }
                                                  else {
                                                    _DAT_100295cc =
                                                         GetProcAddress(DAT_10029a88,
                                                                        "glEvalCoord1dv");
                                                    if (_DAT_100295cc == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glEvalCoord1dv";
                                                    }
                                                    else {
                                                      DAT_100295d0 = GetProcAddress(DAT_10029a88,
                                                                                    "glEvalCoord1f")
                                                      ;
                                                      if (DAT_100295d0 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glEvalCoord1f";
                                                      }
                                                      else {
                                                        _DAT_100295d4 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glEvalCoord1fv");
                                                        if (_DAT_100295d4 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glEvalCoord1fv";
                                                        }
                                                        else {
                                                          DAT_100295d8 = GetProcAddress(DAT_10029a88
                                                                                        ,
                                                  "glEvalCoord2d");
                                                  if (DAT_100295d8 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glEvalCoord2d";
                                                  }
                                                  else {
                                                    _DAT_100295dc =
                                                         GetProcAddress(DAT_10029a88,
                                                                        "glEvalCoord2dv");
                                                    if (_DAT_100295dc == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glEvalCoord2dv";
                                                    }
                                                    else {
                                                      DAT_100295e0 = GetProcAddress(DAT_10029a88,
                                                                                    "glEvalCoord2f")
                                                      ;
                                                      if (DAT_100295e0 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glEvalCoord2f";
                                                      }
                                                      else {
                                                        _DAT_100295e4 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glEvalCoord2fv");
                                                        if (_DAT_100295e4 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glEvalCoord2fv";
                                                        }
                                                        else {
                                                          _DAT_100295e8 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glEvalMesh1");
                                                          if (_DAT_100295e8 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glEvalMesh1";
                                                          }
                                                          else {
                                                            _DAT_100295ec =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glEvalMesh2");
                                                            if (_DAT_100295ec == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glEvalMesh2";
                                                            }
                                                            else {
                                                              _DAT_100295f0 =
                                                                   GetProcAddress(DAT_10029a88,
                                                                                  "glEvalPoint1");
                                                              if (_DAT_100295f0 == (FARPROC)0x0) {
                                                                pcVar1 = "failed\n";
                                                                (*(code *)PTR_FUN_10028344)();
                                                                FUN_10001bf0(pcVar1);
                                                                pcVar1 = "glEvalPoint1";
                                                              }
                                                              else {
                                                                _DAT_100295f4 =
                                                                     GetProcAddress(DAT_10029a88,
                                                                                    "glEvalPoint2");
                                                                if (_DAT_100295f4 == (FARPROC)0x0) {
                                                                  pcVar1 = "failed\n";
                                                                  (*(code *)PTR_FUN_10028344)();
                                                                  FUN_10001bf0(pcVar1);
                                                                  pcVar1 = "glEvalPoint2";
                                                                }
                                                                else {
                                                                  _DAT_100295f8 =
                                                                       GetProcAddress(DAT_10029a88,
                                                                                                                                                                            
                                                  "glFeedbackBuffer");
                                                  if (_DAT_100295f8 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glFeedbackBuffer";
                                                  }
                                                  else {
                                                    _DAT_100295fc =
                                                         GetProcAddress(DAT_10029a88,"glFinish");
                                                    if (_DAT_100295fc == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glFinish";
                                                    }
                                                    else {
                                                      _DAT_10029600 =
                                                           GetProcAddress(DAT_10029a88,"glFlush");
                                                      if (_DAT_10029600 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glFlush";
                                                      }
                                                      else {
                                                        DAT_10029604 = GetProcAddress(DAT_10029a88,
                                                                                      "glFogf");
                                                        if (DAT_10029604 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glFogf";
                                                        }
                                                        else {
                                                          _DAT_10029608 =
                                                               GetProcAddress(DAT_10029a88,"glFogfv"
                                                                             );
                                                          if (_DAT_10029608 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glFogfv";
                                                          }
                                                          else {
                                                            _DAT_1002960c =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glFogi");
                                                            if (_DAT_1002960c == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glFogi";
                                                            }
                                                            else {
                                                              _DAT_10029610 =
                                                                   GetProcAddress(DAT_10029a88,
                                                                                  "glFogiv");
                                                              if (_DAT_10029610 == (FARPROC)0x0) {
                                                                pcVar1 = "failed\n";
                                                                (*(code *)PTR_FUN_10028344)();
                                                                FUN_10001bf0(pcVar1);
                                                                pcVar1 = "glFogiv";
                                                              }
                                                              else {
                                                                _DAT_10029614 =
                                                                     GetProcAddress(DAT_10029a88,
                                                                                    "glFrontFace");
                                                                if (_DAT_10029614 == (FARPROC)0x0) {
                                                                  pcVar1 = "failed\n";
                                                                  (*(code *)PTR_FUN_10028344)();
                                                                  FUN_10001bf0(pcVar1);
                                                                  pcVar1 = "glFrontFace";
                                                                }
                                                                else {
                                                                  DAT_10029618 = GetProcAddress(
                                                  DAT_10029a88,"glFrustum");
                                                  if (DAT_10029618 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glFrustum";
                                                  }
                                                  else {
                                                    _DAT_1002961c =
                                                         GetProcAddress(DAT_10029a88,"glGenLists");
                                                    if (_DAT_1002961c == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glGenLists";
                                                    }
                                                    else {
                                                      _DAT_10029620 =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "glGenTextures");
                                                      if (_DAT_10029620 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glGenTextures";
                                                      }
                                                      else {
                                                        DAT_10029624 = GetProcAddress(DAT_10029a88,
                                                                                                                                                                            
                                                  "glGetBooleanv");
                                                  if (DAT_10029624 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glGetBooleanv";
                                                  }
                                                  else {
                                                    _DAT_10029628 =
                                                         GetProcAddress(DAT_10029a88,
                                                                        "glGetClipPlane");
                                                    if (_DAT_10029628 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glGetClipPlane";
                                                    }
                                                    else {
                                                      _DAT_1002962c =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "glGetDoublev");
                                                      if (_DAT_1002962c == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glGetDoublev";
                                                      }
                                                      else {
                                                        DAT_10029630 = GetProcAddress(DAT_10029a88,
                                                                                      "glGetError");
                                                        if (DAT_10029630 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glGetError";
                                                        }
                                                        else {
                                                          DAT_10029634 = GetProcAddress(DAT_10029a88
                                                                                        ,
                                                  "glGetFloatv");
                                                  if (DAT_10029634 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glGetFloatv";
                                                  }
                                                  else {
                                                    DAT_10029638 = GetProcAddress(DAT_10029a88,
                                                                                  "glGetIntegerv");
                                                    if (DAT_10029638 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glGetIntegerv";
                                                    }
                                                    else {
                                                      _DAT_1002963c =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "glGetLightfv");
                                                      if (_DAT_1002963c == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glGetLightfv";
                                                      }
                                                      else {
                                                        _DAT_10029640 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glGetLightiv");
                                                        if (_DAT_10029640 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glGetLightiv";
                                                        }
                                                        else {
                                                          _DAT_10029644 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glGetMapdv");
                                                          if (_DAT_10029644 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glGetMapdv";
                                                          }
                                                          else {
                                                            _DAT_10029648 =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glGetMapfv");
                                                            if (_DAT_10029648 == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glGetMapfv";
                                                            }
                                                            else {
                                                              _DAT_1002964c =
                                                                   GetProcAddress(DAT_10029a88,
                                                                                  "glGetMapiv");
                                                              if (_DAT_1002964c == (FARPROC)0x0) {
                                                                pcVar1 = "failed\n";
                                                                (*(code *)PTR_FUN_10028344)();
                                                                FUN_10001bf0(pcVar1);
                                                                pcVar1 = "glGetMapiv";
                                                              }
                                                              else {
                                                                _DAT_10029650 =
                                                                     GetProcAddress(DAT_10029a88,
                                                                                                                                                                        
                                                  "glGetMaterialfv");
                                                  if (_DAT_10029650 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glGetMaterialfv";
                                                  }
                                                  else {
                                                    _DAT_10029654 =
                                                         GetProcAddress(DAT_10029a88,
                                                                        "glGetMaterialiv");
                                                    if (_DAT_10029654 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glGetMaterialiv";
                                                    }
                                                    else {
                                                      _DAT_10029658 =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "glGetPixelMapfv");
                                                      if (_DAT_10029658 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glGetPixelMapfv";
                                                      }
                                                      else {
                                                        _DAT_1002965c =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glGetPixelMapuiv");
                                                        if (_DAT_1002965c == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glGetPixelMapuiv";
                                                        }
                                                        else {
                                                          _DAT_10029660 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glGetPixelMapusv");
                                                          if (_DAT_10029660 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glGetPixelMapusv";
                                                          }
                                                          else {
                                                            _DAT_10029664 =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glGetPointerv");
                                                            if (_DAT_10029664 == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glGetPointerv";
                                                            }
                                                            else {
                                                              _DAT_10029668 =
                                                                   GetProcAddress(DAT_10029a88,
                                                                                                                                                                    
                                                  "glGetPolygonStipple");
                                                  if (_DAT_10029668 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glGetPolygonStipple";
                                                  }
                                                  else {
                                                    DAT_1002966c = GetProcAddress(DAT_10029a88,
                                                                                  "glGetString");
                                                    if (DAT_1002966c == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glGetString";
                                                    }
                                                    else {
                                                      _DAT_10029670 =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "glGetTexEnvfv");
                                                      if (_DAT_10029670 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glGetTexEnvfv";
                                                      }
                                                      else {
                                                        DAT_10029674 = GetProcAddress(DAT_10029a88,
                                                                                                                                                                            
                                                  "glGetTexEnviv");
                                                  if (DAT_10029674 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glGetTexEnviv";
                                                  }
                                                  else {
                                                    _DAT_10029678 =
                                                         GetProcAddress(DAT_10029a88,"glGetTexGendv"
                                                                       );
                                                    if (_DAT_10029678 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glGetTexGendv";
                                                    }
                                                    else {
                                                      _DAT_1002967c =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "glGetTexGenfv");
                                                      if (_DAT_1002967c == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glGetTexGenfv";
                                                      }
                                                      else {
                                                        _DAT_10029680 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glGetTexGeniv");
                                                        if (_DAT_10029680 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glGetTexGeniv";
                                                        }
                                                        else {
                                                          _DAT_10029684 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glGetTexImage");
                                                          if (_DAT_10029684 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glGetTexImage";
                                                          }
                                                          else {
                                                            _DAT_10029688 =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                                                                                                
                                                  "glGetTexLevelParameterfv");
                                                  if (_DAT_10029688 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glGetTexLevelParameterfv";
                                                  }
                                                  else {
                                                    _DAT_1002968c =
                                                         GetProcAddress(DAT_10029a88,
                                                                        "glGetTexLevelParameteriv");
                                                    if (_DAT_1002968c == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glGetTexLevelParameteriv";
                                                    }
                                                    else {
                                                      _DAT_10029690 =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "glGetTexParameterfv");
                                                      if (_DAT_10029690 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glGetTexParameterfv";
                                                      }
                                                      else {
                                                        _DAT_10029694 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glGetTexParameteriv");
                                                        if (_DAT_10029694 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glGetTexParameteriv";
                                                        }
                                                        else {
                                                          DAT_10029698 = GetProcAddress(DAT_10029a88
                                                                                        ,"glHint");
                                                          if (DAT_10029698 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glHint";
                                                          }
                                                          else {
                                                            _DAT_1002969c =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glIndexMask");
                                                            if (_DAT_1002969c == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glIndexMask";
                                                            }
                                                            else {
                                                              _DAT_100296a0 =
                                                                   GetProcAddress(DAT_10029a88,
                                                                                  "glIndexPointer");
                                                              if (_DAT_100296a0 == (FARPROC)0x0) {
                                                                pcVar1 = "failed\n";
                                                                (*(code *)PTR_FUN_10028344)();
                                                                FUN_10001bf0(pcVar1);
                                                                pcVar1 = "glIndexPointer";
                                                              }
                                                              else {
                                                                DAT_100296a4 = GetProcAddress(
                                                  DAT_10029a88,"glIndexd");
                                                  if (DAT_100296a4 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glIndexd";
                                                  }
                                                  else {
                                                    _DAT_100296a8 =
                                                         GetProcAddress(DAT_10029a88,"glIndexdv");
                                                    if (_DAT_100296a8 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glIndexdv";
                                                    }
                                                    else {
                                                      DAT_100296ac = GetProcAddress(DAT_10029a88,
                                                                                    "glIndexf");
                                                      if (DAT_100296ac == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glIndexf";
                                                      }
                                                      else {
                                                        _DAT_100296b0 =
                                                             GetProcAddress(DAT_10029a88,"glIndexfv"
                                                                           );
                                                        if (_DAT_100296b0 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glIndexfv";
                                                        }
                                                        else {
                                                          _DAT_100296b4 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glIndexi");
                                                          if (_DAT_100296b4 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glIndexi";
                                                          }
                                                          else {
                                                            _DAT_100296b8 =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glIndexiv");
                                                            if (_DAT_100296b8 == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glIndexiv";
                                                            }
                                                            else {
                                                              _DAT_100296bc =
                                                                   GetProcAddress(DAT_10029a88,
                                                                                  "glIndexs");
                                                              if (_DAT_100296bc == (FARPROC)0x0) {
                                                                pcVar1 = "failed\n";
                                                                (*(code *)PTR_FUN_10028344)();
                                                                FUN_10001bf0(pcVar1);
                                                                pcVar1 = "glIndexs";
                                                              }
                                                              else {
                                                                _DAT_100296c0 =
                                                                     GetProcAddress(DAT_10029a88,
                                                                                    "glIndexsv");
                                                                if (_DAT_100296c0 == (FARPROC)0x0) {
                                                                  pcVar1 = "failed\n";
                                                                  (*(code *)PTR_FUN_10028344)();
                                                                  FUN_10001bf0(pcVar1);
                                                                  pcVar1 = "glIndexsv";
                                                                }
                                                                else {
                                                                  _DAT_100296c4 =
                                                                       GetProcAddress(DAT_10029a88,
                                                                                      "glIndexub");
                                                                  if (_DAT_100296c4 == (FARPROC)0x0)
                                                                  {
                                                                    pcVar1 = "failed\n";
                                                                    (*(code *)PTR_FUN_10028344)();
                                                                    FUN_10001bf0(pcVar1);
                                                                    pcVar1 = "glIndexub";
                                                                  }
                                                                  else {
                                                                    _DAT_100296c8 =
                                                                         GetProcAddress(DAT_10029a88
                                                                                        ,
                                                  "glIndexubv");
                                                  if (_DAT_100296c8 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glIndexubv";
                                                  }
                                                  else {
                                                    _DAT_100296cc =
                                                         GetProcAddress(DAT_10029a88,"glInitNames");
                                                    if (_DAT_100296cc == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glInitNames";
                                                    }
                                                    else {
                                                      _DAT_100296d0 =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "glInterleavedArrays");
                                                      if (_DAT_100296d0 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glInterleavedArrays";
                                                      }
                                                      else {
                                                        DAT_100296d4 = GetProcAddress(DAT_10029a88,
                                                                                      "glIsEnabled")
                                                        ;
                                                        if (DAT_100296d4 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glIsEnabled";
                                                        }
                                                        else {
                                                          _DAT_100296d8 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glIsList");
                                                          if (_DAT_100296d8 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glIsList";
                                                          }
                                                          else {
                                                            DAT_100296dc = GetProcAddress(
                                                  DAT_10029a88,"glIsTexture");
                                                  if (DAT_100296dc == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glIsTexture";
                                                  }
                                                  else {
                                                    DAT_100296e0 = GetProcAddress(DAT_10029a88,
                                                                                  "glLightModelf");
                                                    if (DAT_100296e0 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glLightModelf";
                                                    }
                                                    else {
                                                      _DAT_100296e4 =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "glLightModelfv");
                                                      if (_DAT_100296e4 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glLightModelfv";
                                                      }
                                                      else {
                                                        _DAT_100296e8 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glLightModeli");
                                                        if (_DAT_100296e8 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glLightModeli";
                                                        }
                                                        else {
                                                          _DAT_100296ec =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glLightModeliv");
                                                          if (_DAT_100296ec == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glLightModeliv";
                                                          }
                                                          else {
                                                            DAT_100296f0 = GetProcAddress(
                                                  DAT_10029a88,"glLightf");
                                                  if (DAT_100296f0 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glLightf";
                                                  }
                                                  else {
                                                    _DAT_100296f4 =
                                                         GetProcAddress(DAT_10029a88,"glLightfv");
                                                    if (_DAT_100296f4 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glLightfv";
                                                    }
                                                    else {
                                                      _DAT_100296f8 =
                                                           GetProcAddress(DAT_10029a88,"glLighti");
                                                      if (_DAT_100296f8 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glLighti";
                                                      }
                                                      else {
                                                        _DAT_100296fc =
                                                             GetProcAddress(DAT_10029a88,"glLightiv"
                                                                           );
                                                        if (_DAT_100296fc == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glLightiv";
                                                        }
                                                        else {
                                                          _DAT_10029700 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glLineStipple");
                                                          if (_DAT_10029700 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glLineStipple";
                                                          }
                                                          else {
                                                            DAT_10029704 = GetProcAddress(
                                                  DAT_10029a88,"glLineWidth");
                                                  if (DAT_10029704 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glLineWidth";
                                                  }
                                                  else {
                                                    _DAT_10029708 =
                                                         GetProcAddress(DAT_10029a88,"glListBase");
                                                    if (_DAT_10029708 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glListBase";
                                                    }
                                                    else {
                                                      DAT_1002970c = GetProcAddress(DAT_10029a88,
                                                                                    "glLoadIdentity"
                                                                                   );
                                                      if (DAT_1002970c == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glLoadIdentity";
                                                      }
                                                      else {
                                                        DAT_10029710 = GetProcAddress(DAT_10029a88,
                                                                                                                                                                            
                                                  "glLoadMatrixd");
                                                  if (DAT_10029710 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glLoadMatrixd";
                                                  }
                                                  else {
                                                    DAT_10029714 = GetProcAddress(DAT_10029a88,
                                                                                  "glLoadMatrixf");
                                                    if (DAT_10029714 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glLoadMatrixf";
                                                    }
                                                    else {
                                                      _DAT_10029718 =
                                                           GetProcAddress(DAT_10029a88,"glLoadName")
                                                      ;
                                                      if (_DAT_10029718 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glLoadName";
                                                      }
                                                      else {
                                                        _DAT_1002971c =
                                                             GetProcAddress(DAT_10029a88,"glLogicOp"
                                                                           );
                                                        if (_DAT_1002971c == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glLogicOp";
                                                        }
                                                        else {
                                                          DAT_10029720 = GetProcAddress(DAT_10029a88
                                                                                        ,"glMap1d");
                                                          if (DAT_10029720 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glMap1d";
                                                          }
                                                          else {
                                                            DAT_10029724 = GetProcAddress(
                                                  DAT_10029a88,"glMap1f");
                                                  if (DAT_10029724 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glMap1f";
                                                  }
                                                  else {
                                                    DAT_10029728 = GetProcAddress(DAT_10029a88,
                                                                                  "glMap2d");
                                                    if (DAT_10029728 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glMap2d";
                                                    }
                                                    else {
                                                      DAT_1002972c = GetProcAddress(DAT_10029a88,
                                                                                    "glMap2f");
                                                      if (DAT_1002972c == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glMap2f";
                                                      }
                                                      else {
                                                        DAT_10029730 = GetProcAddress(DAT_10029a88,
                                                                                      "glMapGrid1d")
                                                        ;
                                                        if (DAT_10029730 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glMapGrid1d";
                                                        }
                                                        else {
                                                          DAT_10029734 = GetProcAddress(DAT_10029a88
                                                                                        ,
                                                  "glMapGrid1f");
                                                  if (DAT_10029734 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glMapGrid1f";
                                                  }
                                                  else {
                                                    DAT_10029738 = GetProcAddress(DAT_10029a88,
                                                                                  "glMapGrid2d");
                                                    if (DAT_10029738 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glMapGrid2d";
                                                    }
                                                    else {
                                                      DAT_1002973c = GetProcAddress(DAT_10029a88,
                                                                                    "glMapGrid2f");
                                                      if (DAT_1002973c == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glMapGrid2f";
                                                      }
                                                      else {
                                                        DAT_10029740 = GetProcAddress(DAT_10029a88,
                                                                                      "glMaterialf")
                                                        ;
                                                        if (DAT_10029740 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glMaterialf";
                                                        }
                                                        else {
                                                          _DAT_10029744 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glMaterialfv");
                                                          if (_DAT_10029744 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glMaterialfv";
                                                          }
                                                          else {
                                                            _DAT_10029748 =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glMateriali");
                                                            if (_DAT_10029748 == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glMateriali";
                                                            }
                                                            else {
                                                              _DAT_1002974c =
                                                                   GetProcAddress(DAT_10029a88,
                                                                                  "glMaterialiv");
                                                              if (_DAT_1002974c == (FARPROC)0x0) {
                                                                pcVar1 = "failed\n";
                                                                (*(code *)PTR_FUN_10028344)();
                                                                FUN_10001bf0(pcVar1);
                                                                pcVar1 = "glMaterialiv";
                                                              }
                                                              else {
                                                                DAT_10029750 = GetProcAddress(
                                                  DAT_10029a88,"glMatrixMode");
                                                  if (DAT_10029750 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glMatrixMode";
                                                  }
                                                  else {
                                                    _DAT_10029754 =
                                                         GetProcAddress(DAT_10029a88,"glMultMatrixd"
                                                                       );
                                                    if (_DAT_10029754 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glMultMatrixd";
                                                    }
                                                    else {
                                                      _DAT_10029758 =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "glMultMatrixf");
                                                      if (_DAT_10029758 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glMultMatrixf";
                                                      }
                                                      else {
                                                        _DAT_1002975c =
                                                             GetProcAddress(DAT_10029a88,"glNewList"
                                                                           );
                                                        if (_DAT_1002975c == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glNewList";
                                                        }
                                                        else {
                                                          _DAT_10029760 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glNormal3b");
                                                          if (_DAT_10029760 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glNormal3b";
                                                          }
                                                          else {
                                                            _DAT_10029764 =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glNormal3bv");
                                                            if (_DAT_10029764 == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glNormal3bv";
                                                            }
                                                            else {
                                                              DAT_10029768 = GetProcAddress(
                                                  DAT_10029a88,"glNormal3d");
                                                  if (DAT_10029768 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glNormal3d";
                                                  }
                                                  else {
                                                    _DAT_1002976c =
                                                         GetProcAddress(DAT_10029a88,"glNormal3dv");
                                                    if (_DAT_1002976c == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glNormal3dv";
                                                    }
                                                    else {
                                                      DAT_10029770 = GetProcAddress(DAT_10029a88,
                                                                                    "glNormal3f");
                                                      if (DAT_10029770 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glNormal3f";
                                                      }
                                                      else {
                                                        _DAT_10029774 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glNormal3fv");
                                                        if (_DAT_10029774 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glNormal3fv";
                                                        }
                                                        else {
                                                          _DAT_10029778 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glNormal3i");
                                                          if (_DAT_10029778 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glNormal3i";
                                                          }
                                                          else {
                                                            _DAT_1002977c =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glNormal3iv");
                                                            if (_DAT_1002977c == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glNormal3iv";
                                                            }
                                                            else {
                                                              _DAT_10029780 =
                                                                   GetProcAddress(DAT_10029a88,
                                                                                  "glNormal3s");
                                                              if (_DAT_10029780 == (FARPROC)0x0) {
                                                                pcVar1 = "failed\n";
                                                                (*(code *)PTR_FUN_10028344)();
                                                                FUN_10001bf0(pcVar1);
                                                                pcVar1 = "glNormal3s";
                                                              }
                                                              else {
                                                                _DAT_10029784 =
                                                                     GetProcAddress(DAT_10029a88,
                                                                                    "glNormal3sv");
                                                                if (_DAT_10029784 == (FARPROC)0x0) {
                                                                  pcVar1 = "failed\n";
                                                                  (*(code *)PTR_FUN_10028344)();
                                                                  FUN_10001bf0(pcVar1);
                                                                  pcVar1 = "glNormal3sv";
                                                                }
                                                                else {
                                                                  _DAT_10029788 =
                                                                       GetProcAddress(DAT_10029a88,
                                                                                                                                                                            
                                                  "glNormalPointer");
                                                  if (_DAT_10029788 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glNormalPointer";
                                                  }
                                                  else {
                                                    DAT_1002978c = GetProcAddress(DAT_10029a88,
                                                                                  "glOrtho");
                                                    if (DAT_1002978c == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glOrtho";
                                                    }
                                                    else {
                                                      DAT_10029790 = GetProcAddress(DAT_10029a88,
                                                                                    "glPassThrough")
                                                      ;
                                                      if (DAT_10029790 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glPassThrough";
                                                      }
                                                      else {
                                                        _DAT_10029794 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glPixelMapfv");
                                                        if (_DAT_10029794 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glPixelMapfv";
                                                        }
                                                        else {
                                                          _DAT_10029798 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glPixelMapuiv");
                                                          if (_DAT_10029798 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glPixelMapuiv";
                                                          }
                                                          else {
                                                            _DAT_1002979c =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glPixelMapusv");
                                                            if (_DAT_1002979c == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glPixelMapusv";
                                                            }
                                                            else {
                                                              DAT_100297a0 = GetProcAddress(
                                                  DAT_10029a88,"glPixelStoref");
                                                  if (DAT_100297a0 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glPixelStoref";
                                                  }
                                                  else {
                                                    _DAT_100297a4 =
                                                         GetProcAddress(DAT_10029a88,"glPixelStorei"
                                                                       );
                                                    if (_DAT_100297a4 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glPixelStorei";
                                                    }
                                                    else {
                                                      DAT_100297a8 = GetProcAddress(DAT_10029a88,
                                                                                                                                                                        
                                                  "glPixelTransferf");
                                                  if (DAT_100297a8 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glPixelTransferf";
                                                  }
                                                  else {
                                                    _DAT_100297ac =
                                                         GetProcAddress(DAT_10029a88,
                                                                        "glPixelTransferi");
                                                    if (_DAT_100297ac == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glPixelTransferi";
                                                    }
                                                    else {
                                                      DAT_100297b0 = GetProcAddress(DAT_10029a88,
                                                                                    "glPixelZoom");
                                                      if (DAT_100297b0 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glPixelZoom";
                                                      }
                                                      else {
                                                        DAT_100297b4 = GetProcAddress(DAT_10029a88,
                                                                                      "glPointSize")
                                                        ;
                                                        if (DAT_100297b4 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glPointSize";
                                                        }
                                                        else {
                                                          _DAT_100297b8 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glPolygonMode");
                                                          if (_DAT_100297b8 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glPolygonMode";
                                                          }
                                                          else {
                                                            DAT_100297bc = GetProcAddress(
                                                  DAT_10029a88,"glPolygonOffset");
                                                  if (DAT_100297bc == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glPolygonOffset";
                                                  }
                                                  else {
                                                    _DAT_100297c0 =
                                                         GetProcAddress(DAT_10029a88,
                                                                        "glPolygonStipple");
                                                    if (_DAT_100297c0 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glPolygonStipple";
                                                    }
                                                    else {
                                                      _DAT_100297c4 =
                                                           GetProcAddress(DAT_10029a88,"glPopAttrib"
                                                                         );
                                                      if (_DAT_100297c4 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glPopAttrib";
                                                      }
                                                      else {
                                                        _DAT_100297c8 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glPopClientAttrib");
                                                        if (_DAT_100297c8 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glPopClientAttrib";
                                                        }
                                                        else {
                                                          DAT_100297cc = GetProcAddress(DAT_10029a88
                                                                                        ,
                                                  "glPopMatrix");
                                                  if (DAT_100297cc == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glPopMatrix";
                                                  }
                                                  else {
                                                    _DAT_100297d0 =
                                                         GetProcAddress(DAT_10029a88,"glPopName");
                                                    if (_DAT_100297d0 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glPopName";
                                                    }
                                                    else {
                                                      _DAT_100297d4 =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "glPrioritizeTextures");
                                                      if (_DAT_100297d4 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glPrioritizeTextures";
                                                      }
                                                      else {
                                                        _DAT_100297d8 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glPushAttrib");
                                                        if (_DAT_100297d8 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glPushAttrib";
                                                        }
                                                        else {
                                                          _DAT_100297dc =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glPushClientAttrib");
                                                          if (_DAT_100297dc == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glPushClientAttrib";
                                                          }
                                                          else {
                                                            DAT_100297e0 = GetProcAddress(
                                                  DAT_10029a88,"glPushMatrix");
                                                  if (DAT_100297e0 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glPushMatrix";
                                                  }
                                                  else {
                                                    _DAT_100297e4 =
                                                         GetProcAddress(DAT_10029a88,"glPushName");
                                                    if (_DAT_100297e4 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glPushName";
                                                    }
                                                    else {
                                                      DAT_100297e8 = GetProcAddress(DAT_10029a88,
                                                                                    "glRasterPos2d")
                                                      ;
                                                      if (DAT_100297e8 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glRasterPos2d";
                                                      }
                                                      else {
                                                        _DAT_100297ec =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glRasterPos2dv");
                                                        if (_DAT_100297ec == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glRasterPos2dv";
                                                        }
                                                        else {
                                                          DAT_100297f0 = GetProcAddress(DAT_10029a88
                                                                                        ,
                                                  "glRasterPos2f");
                                                  if (DAT_100297f0 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glRasterPos2f";
                                                  }
                                                  else {
                                                    _DAT_100297f4 =
                                                         GetProcAddress(DAT_10029a88,
                                                                        "glRasterPos2fv");
                                                    if (_DAT_100297f4 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glRasterPos2fv";
                                                    }
                                                    else {
                                                      _DAT_100297f8 =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "glRasterPos2i");
                                                      if (_DAT_100297f8 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glRasterPos2i";
                                                      }
                                                      else {
                                                        _DAT_100297fc =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glRasterPos2iv");
                                                        if (_DAT_100297fc == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glRasterPos2iv";
                                                        }
                                                        else {
                                                          _DAT_10029800 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glRasterPos2s");
                                                          if (_DAT_10029800 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glRasterPos2s";
                                                          }
                                                          else {
                                                            _DAT_10029804 =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glRasterPos2sv");
                                                            if (_DAT_10029804 == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glRasterPos2sv";
                                                            }
                                                            else {
                                                              DAT_10029808 = GetProcAddress(
                                                  DAT_10029a88,"glRasterPos3d");
                                                  if (DAT_10029808 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glRasterPos3d";
                                                  }
                                                  else {
                                                    _DAT_1002980c =
                                                         GetProcAddress(DAT_10029a88,
                                                                        "glRasterPos3dv");
                                                    if (_DAT_1002980c == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glRasterPos3dv";
                                                    }
                                                    else {
                                                      DAT_10029810 = GetProcAddress(DAT_10029a88,
                                                                                    "glRasterPos3f")
                                                      ;
                                                      if (DAT_10029810 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glRasterPos3f";
                                                      }
                                                      else {
                                                        _DAT_10029814 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glRasterPos3fv");
                                                        if (_DAT_10029814 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glRasterPos3fv";
                                                        }
                                                        else {
                                                          _DAT_10029818 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glRasterPos3i");
                                                          if (_DAT_10029818 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glRasterPos3i";
                                                          }
                                                          else {
                                                            _DAT_1002981c =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glRasterPos3iv");
                                                            if (_DAT_1002981c == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glRasterPos3iv";
                                                            }
                                                            else {
                                                              _DAT_10029820 =
                                                                   GetProcAddress(DAT_10029a88,
                                                                                  "glRasterPos3s");
                                                              if (_DAT_10029820 == (FARPROC)0x0) {
                                                                pcVar1 = "failed\n";
                                                                (*(code *)PTR_FUN_10028344)();
                                                                FUN_10001bf0(pcVar1);
                                                                pcVar1 = "glRasterPos3s";
                                                              }
                                                              else {
                                                                _DAT_10029824 =
                                                                     GetProcAddress(DAT_10029a88,
                                                                                    "glRasterPos3sv"
                                                                                   );
                                                                if (_DAT_10029824 == (FARPROC)0x0) {
                                                                  pcVar1 = "failed\n";
                                                                  (*(code *)PTR_FUN_10028344)();
                                                                  FUN_10001bf0(pcVar1);
                                                                  pcVar1 = "glRasterPos3sv";
                                                                }
                                                                else {
                                                                  DAT_10029828 = GetProcAddress(
                                                  DAT_10029a88,"glRasterPos4d");
                                                  if (DAT_10029828 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glRasterPos4d";
                                                  }
                                                  else {
                                                    _DAT_1002982c =
                                                         GetProcAddress(DAT_10029a88,
                                                                        "glRasterPos4dv");
                                                    if (_DAT_1002982c == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glRasterPos4dv";
                                                    }
                                                    else {
                                                      DAT_10029830 = GetProcAddress(DAT_10029a88,
                                                                                    "glRasterPos4f")
                                                      ;
                                                      if (DAT_10029830 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glRasterPos4f";
                                                      }
                                                      else {
                                                        _DAT_10029834 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glRasterPos4fv");
                                                        if (_DAT_10029834 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glRasterPos4fv";
                                                        }
                                                        else {
                                                          _DAT_10029838 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glRasterPos4i");
                                                          if (_DAT_10029838 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glRasterPos4i";
                                                          }
                                                          else {
                                                            _DAT_1002983c =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glRasterPos4iv");
                                                            if (_DAT_1002983c == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glRasterPos4iv";
                                                            }
                                                            else {
                                                              _DAT_10029840 =
                                                                   GetProcAddress(DAT_10029a88,
                                                                                  "glRasterPos4s");
                                                              if (_DAT_10029840 == (FARPROC)0x0) {
                                                                pcVar1 = "failed\n";
                                                                (*(code *)PTR_FUN_10028344)();
                                                                FUN_10001bf0(pcVar1);
                                                                pcVar1 = "glRasterPos4s";
                                                              }
                                                              else {
                                                                _DAT_10029844 =
                                                                     GetProcAddress(DAT_10029a88,
                                                                                    "glRasterPos4sv"
                                                                                   );
                                                                if (_DAT_10029844 == (FARPROC)0x0) {
                                                                  pcVar1 = "failed\n";
                                                                  (*(code *)PTR_FUN_10028344)();
                                                                  FUN_10001bf0(pcVar1);
                                                                  pcVar1 = "glRasterPos4sv";
                                                                }
                                                                else {
                                                                  _DAT_10029848 =
                                                                       GetProcAddress(DAT_10029a88,
                                                                                      "glReadBuffer"
                                                                                     );
                                                                  if (_DAT_10029848 == (FARPROC)0x0)
                                                                  {
                                                                    pcVar1 = "failed\n";
                                                                    (*(code *)PTR_FUN_10028344)();
                                                                    FUN_10001bf0(pcVar1);
                                                                    pcVar1 = "glReadBuffer";
                                                                  }
                                                                  else {
                                                                    DAT_1002984c = GetProcAddress(
                                                  DAT_10029a88,"glReadPixels");
                                                  if (DAT_1002984c == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glReadPixels";
                                                  }
                                                  else {
                                                    DAT_10029850 = GetProcAddress(DAT_10029a88,
                                                                                  "glRectd");
                                                    if (DAT_10029850 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glRectd";
                                                    }
                                                    else {
                                                      _DAT_10029854 =
                                                           GetProcAddress(DAT_10029a88,"glRectdv");
                                                      if (_DAT_10029854 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glRectdv";
                                                      }
                                                      else {
                                                        DAT_10029858 = GetProcAddress(DAT_10029a88,
                                                                                      "glRectf");
                                                        if (DAT_10029858 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glRectf";
                                                        }
                                                        else {
                                                          _DAT_1002985c =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glRectfv");
                                                          if (_DAT_1002985c == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glRectfv";
                                                          }
                                                          else {
                                                            _DAT_10029860 =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glRecti");
                                                            if (_DAT_10029860 == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glRecti";
                                                            }
                                                            else {
                                                              _DAT_10029864 =
                                                                   GetProcAddress(DAT_10029a88,
                                                                                  "glRectiv");
                                                              if (_DAT_10029864 == (FARPROC)0x0) {
                                                                pcVar1 = "failed\n";
                                                                (*(code *)PTR_FUN_10028344)();
                                                                FUN_10001bf0(pcVar1);
                                                                pcVar1 = "glRectiv";
                                                              }
                                                              else {
                                                                _DAT_10029868 =
                                                                     GetProcAddress(DAT_10029a88,
                                                                                    "glRects");
                                                                if (_DAT_10029868 == (FARPROC)0x0) {
                                                                  pcVar1 = "failed\n";
                                                                  (*(code *)PTR_FUN_10028344)();
                                                                  FUN_10001bf0(pcVar1);
                                                                  pcVar1 = "glRects";
                                                                }
                                                                else {
                                                                  _DAT_1002986c =
                                                                       GetProcAddress(DAT_10029a88,
                                                                                      "glRectsv");
                                                                  if (_DAT_1002986c == (FARPROC)0x0)
                                                                  {
                                                                    pcVar1 = "failed\n";
                                                                    (*(code *)PTR_FUN_10028344)();
                                                                    FUN_10001bf0(pcVar1);
                                                                    pcVar1 = "glRectsv";
                                                                  }
                                                                  else {
                                                                    _DAT_10029870 =
                                                                         GetProcAddress(DAT_10029a88
                                                                                        ,
                                                  "glRenderMode");
                                                  if (_DAT_10029870 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glRenderMode";
                                                  }
                                                  else {
                                                    DAT_10029874 = GetProcAddress(DAT_10029a88,
                                                                                  "glRotated");
                                                    if (DAT_10029874 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glRotated";
                                                    }
                                                    else {
                                                      DAT_10029878 = GetProcAddress(DAT_10029a88,
                                                                                    "glRotatef");
                                                      if (DAT_10029878 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glRotatef";
                                                      }
                                                      else {
                                                        DAT_1002987c = GetProcAddress(DAT_10029a88,
                                                                                      "glScaled");
                                                        if (DAT_1002987c == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glScaled";
                                                        }
                                                        else {
                                                          DAT_10029880 = GetProcAddress(DAT_10029a88
                                                                                        ,"glScalef")
                                                          ;
                                                          if (DAT_10029880 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glScalef";
                                                          }
                                                          else {
                                                            DAT_10029884 = GetProcAddress(
                                                  DAT_10029a88,"glScissor");
                                                  if (DAT_10029884 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glScissor";
                                                  }
                                                  else {
                                                    _DAT_10029888 =
                                                         GetProcAddress(DAT_10029a88,
                                                                        "glSelectBuffer");
                                                    if (_DAT_10029888 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glSelectBuffer";
                                                    }
                                                    else {
                                                      _DAT_1002988c =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "glShadeModel");
                                                      if (_DAT_1002988c == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glShadeModel";
                                                      }
                                                      else {
                                                        _DAT_10029890 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glStencilFunc");
                                                        if (_DAT_10029890 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glStencilFunc";
                                                        }
                                                        else {
                                                          _DAT_10029894 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glStencilMask");
                                                          if (_DAT_10029894 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glStencilMask";
                                                          }
                                                          else {
                                                            _DAT_10029898 =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glStencilOp");
                                                            if (_DAT_10029898 == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glStencilOp";
                                                            }
                                                            else {
                                                              DAT_1002989c = GetProcAddress(
                                                  DAT_10029a88,"glTexCoord1d");
                                                  if (DAT_1002989c == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glTexCoord1d";
                                                  }
                                                  else {
                                                    _DAT_100298a0 =
                                                         GetProcAddress(DAT_10029a88,"glTexCoord1dv"
                                                                       );
                                                    if (_DAT_100298a0 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glTexCoord1dv";
                                                    }
                                                    else {
                                                      DAT_100298a4 = GetProcAddress(DAT_10029a88,
                                                                                    "glTexCoord1f");
                                                      if (DAT_100298a4 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glTexCoord1f";
                                                      }
                                                      else {
                                                        _DAT_100298a8 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glTexCoord1fv");
                                                        if (_DAT_100298a8 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glTexCoord1fv";
                                                        }
                                                        else {
                                                          _DAT_100298ac =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glTexCoord1i");
                                                          if (_DAT_100298ac == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glTexCoord1i";
                                                          }
                                                          else {
                                                            _DAT_100298b0 =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glTexCoord1iv");
                                                            if (_DAT_100298b0 == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glTexCoord1iv";
                                                            }
                                                            else {
                                                              _DAT_100298b4 =
                                                                   GetProcAddress(DAT_10029a88,
                                                                                  "glTexCoord1s");
                                                              if (_DAT_100298b4 == (FARPROC)0x0) {
                                                                pcVar1 = "failed\n";
                                                                (*(code *)PTR_FUN_10028344)();
                                                                FUN_10001bf0(pcVar1);
                                                                pcVar1 = "glTexCoord1s";
                                                              }
                                                              else {
                                                                _DAT_100298b8 =
                                                                     GetProcAddress(DAT_10029a88,
                                                                                    "glTexCoord1sv")
                                                                ;
                                                                if (_DAT_100298b8 == (FARPROC)0x0) {
                                                                  pcVar1 = "failed\n";
                                                                  (*(code *)PTR_FUN_10028344)();
                                                                  FUN_10001bf0(pcVar1);
                                                                  pcVar1 = "glTexCoord1sv";
                                                                }
                                                                else {
                                                                  DAT_100298bc = GetProcAddress(
                                                  DAT_10029a88,"glTexCoord2d");
                                                  if (DAT_100298bc == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glTexCoord2d";
                                                  }
                                                  else {
                                                    _DAT_100298c0 =
                                                         GetProcAddress(DAT_10029a88,"glTexCoord2dv"
                                                                       );
                                                    if (_DAT_100298c0 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glTexCoord2dv";
                                                    }
                                                    else {
                                                      DAT_100298c4 = GetProcAddress(DAT_10029a88,
                                                                                    "glTexCoord2f");
                                                      if (DAT_100298c4 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glTexCoord2f";
                                                      }
                                                      else {
                                                        _DAT_100298c8 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glTexCoord2fv");
                                                        if (_DAT_100298c8 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glTexCoord2fv";
                                                        }
                                                        else {
                                                          _DAT_100298cc =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glTexCoord2i");
                                                          if (_DAT_100298cc == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glTexCoord2i";
                                                          }
                                                          else {
                                                            _DAT_100298d0 =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glTexCoord2iv");
                                                            if (_DAT_100298d0 == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glTexCoord2iv";
                                                            }
                                                            else {
                                                              _DAT_100298d4 =
                                                                   GetProcAddress(DAT_10029a88,
                                                                                  "glTexCoord2s");
                                                              if (_DAT_100298d4 == (FARPROC)0x0) {
                                                                pcVar1 = "failed\n";
                                                                (*(code *)PTR_FUN_10028344)();
                                                                FUN_10001bf0(pcVar1);
                                                                pcVar1 = "glTexCoord2s";
                                                              }
                                                              else {
                                                                _DAT_100298d8 =
                                                                     GetProcAddress(DAT_10029a88,
                                                                                    "glTexCoord2sv")
                                                                ;
                                                                if (_DAT_100298d8 == (FARPROC)0x0) {
                                                                  pcVar1 = "failed\n";
                                                                  (*(code *)PTR_FUN_10028344)();
                                                                  FUN_10001bf0(pcVar1);
                                                                  pcVar1 = "glTexCoord2sv";
                                                                }
                                                                else {
                                                                  DAT_100298dc = GetProcAddress(
                                                  DAT_10029a88,"glTexCoord3d");
                                                  if (DAT_100298dc == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glTexCoord3d";
                                                  }
                                                  else {
                                                    _DAT_100298e0 =
                                                         GetProcAddress(DAT_10029a88,"glTexCoord3dv"
                                                                       );
                                                    if (_DAT_100298e0 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glTexCoord3dv";
                                                    }
                                                    else {
                                                      DAT_100298e4 = GetProcAddress(DAT_10029a88,
                                                                                    "glTexCoord3f");
                                                      if (DAT_100298e4 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glTexCoord3f";
                                                      }
                                                      else {
                                                        _DAT_100298e8 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glTexCoord3fv");
                                                        if (_DAT_100298e8 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glTexCoord3fv";
                                                        }
                                                        else {
                                                          _DAT_100298ec =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glTexCoord3i");
                                                          if (_DAT_100298ec == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glTexCoord3i";
                                                          }
                                                          else {
                                                            _DAT_100298f0 =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glTexCoord3iv");
                                                            if (_DAT_100298f0 == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glTexCoord3iv";
                                                            }
                                                            else {
                                                              _DAT_100298f4 =
                                                                   GetProcAddress(DAT_10029a88,
                                                                                  "glTexCoord3s");
                                                              if (_DAT_100298f4 == (FARPROC)0x0) {
                                                                pcVar1 = "failed\n";
                                                                (*(code *)PTR_FUN_10028344)();
                                                                FUN_10001bf0(pcVar1);
                                                                pcVar1 = "glTexCoord3s";
                                                              }
                                                              else {
                                                                _DAT_100298f8 =
                                                                     GetProcAddress(DAT_10029a88,
                                                                                    "glTexCoord3sv")
                                                                ;
                                                                if (_DAT_100298f8 == (FARPROC)0x0) {
                                                                  pcVar1 = "failed\n";
                                                                  (*(code *)PTR_FUN_10028344)();
                                                                  FUN_10001bf0(pcVar1);
                                                                  pcVar1 = "glTexCoord3sv";
                                                                }
                                                                else {
                                                                  DAT_100298fc = GetProcAddress(
                                                  DAT_10029a88,"glTexCoord4d");
                                                  if (DAT_100298fc == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glTexCoord4d";
                                                  }
                                                  else {
                                                    _DAT_10029900 =
                                                         GetProcAddress(DAT_10029a88,"glTexCoord4dv"
                                                                       );
                                                    if (_DAT_10029900 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glTexCoord4dv";
                                                    }
                                                    else {
                                                      DAT_10029904 = GetProcAddress(DAT_10029a88,
                                                                                    "glTexCoord4f");
                                                      if (DAT_10029904 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glTexCoord4f";
                                                      }
                                                      else {
                                                        _DAT_10029908 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glTexCoord4fv");
                                                        if (_DAT_10029908 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glTexCoord4fv";
                                                        }
                                                        else {
                                                          _DAT_1002990c =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glTexCoord4i");
                                                          if (_DAT_1002990c == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glTexCoord4i";
                                                          }
                                                          else {
                                                            _DAT_10029910 =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glTexCoord4iv");
                                                            if (_DAT_10029910 == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glTexCoord4iv";
                                                            }
                                                            else {
                                                              _DAT_10029914 =
                                                                   GetProcAddress(DAT_10029a88,
                                                                                  "glTexCoord4s");
                                                              if (_DAT_10029914 == (FARPROC)0x0) {
                                                                pcVar1 = "failed\n";
                                                                (*(code *)PTR_FUN_10028344)();
                                                                FUN_10001bf0(pcVar1);
                                                                pcVar1 = "glTexCoord4s";
                                                              }
                                                              else {
                                                                _DAT_10029918 =
                                                                     GetProcAddress(DAT_10029a88,
                                                                                    "glTexCoord4sv")
                                                                ;
                                                                if (_DAT_10029918 == (FARPROC)0x0) {
                                                                  pcVar1 = "failed\n";
                                                                  (*(code *)PTR_FUN_10028344)();
                                                                  FUN_10001bf0(pcVar1);
                                                                  pcVar1 = "glTexCoord4sv";
                                                                }
                                                                else {
                                                                  _DAT_1002991c =
                                                                       GetProcAddress(DAT_10029a88,
                                                                                                                                                                            
                                                  "glTexCoordPointer");
                                                  if (_DAT_1002991c == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glTexCoordPointer";
                                                  }
                                                  else {
                                                    DAT_10029920 = GetProcAddress(DAT_10029a88,
                                                                                  "glTexEnvf");
                                                    if (DAT_10029920 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glTexEnvf";
                                                    }
                                                    else {
                                                      _DAT_10029924 =
                                                           GetProcAddress(DAT_10029a88,"glTexEnvfv")
                                                      ;
                                                      if (_DAT_10029924 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glTexEnvfv";
                                                      }
                                                      else {
                                                        DAT_10029928 = GetProcAddress(DAT_10029a88,
                                                                                      "glTexEnvi");
                                                        if (DAT_10029928 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glTexEnvi";
                                                        }
                                                        else {
                                                          _DAT_1002992c =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glTexEnviv");
                                                          if (_DAT_1002992c == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glTexEnviv";
                                                          }
                                                          else {
                                                            DAT_10029930 = GetProcAddress(
                                                  DAT_10029a88,"glTexGend");
                                                  if (DAT_10029930 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glTexGend";
                                                  }
                                                  else {
                                                    _DAT_10029934 =
                                                         GetProcAddress(DAT_10029a88,"glTexGendv");
                                                    if (_DAT_10029934 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glTexGendv";
                                                    }
                                                    else {
                                                      DAT_10029938 = GetProcAddress(DAT_10029a88,
                                                                                    "glTexGenf");
                                                      if (DAT_10029938 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glTexGenf";
                                                      }
                                                      else {
                                                        _DAT_1002993c =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glTexGenfv");
                                                        if (_DAT_1002993c == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glTexGenfv";
                                                        }
                                                        else {
                                                          _DAT_10029940 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glTexGeni");
                                                          if (_DAT_10029940 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glTexGeni";
                                                          }
                                                          else {
                                                            _DAT_10029944 =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glTexGeniv");
                                                            if (_DAT_10029944 == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glTexGeniv";
                                                            }
                                                            else {
                                                              _DAT_10029948 =
                                                                   GetProcAddress(DAT_10029a88,
                                                                                  "glTexImage1D");
                                                              if (_DAT_10029948 == (FARPROC)0x0) {
                                                                pcVar1 = "failed\n";
                                                                (*(code *)PTR_FUN_10028344)();
                                                                FUN_10001bf0(pcVar1);
                                                                pcVar1 = "glTexImage1D";
                                                              }
                                                              else {
                                                                DAT_1002994c = GetProcAddress(
                                                  DAT_10029a88,"glTexImage2D");
                                                  if (DAT_1002994c == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glTexImage2D";
                                                  }
                                                  else {
                                                    DAT_10029950 = GetProcAddress(DAT_10029a88,
                                                                                  "glTexParameterf")
                                                    ;
                                                    if (DAT_10029950 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glTexParameterf";
                                                    }
                                                    else {
                                                      _DAT_10029954 =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "glTexParameterfv");
                                                      if (_DAT_10029954 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glTexParameterfv";
                                                      }
                                                      else {
                                                        DAT_10029958 = GetProcAddress(DAT_10029a88,
                                                                                                                                                                            
                                                  "glTexParameteri");
                                                  if (DAT_10029958 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glTexParameteri";
                                                  }
                                                  else {
                                                    _DAT_1002995c =
                                                         GetProcAddress(DAT_10029a88,
                                                                        "glTexParameteriv");
                                                    if (_DAT_1002995c == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glTexParameteriv";
                                                    }
                                                    else {
                                                      _DAT_10029960 =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "glTexSubImage1D");
                                                      if (_DAT_10029960 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glTexSubImage1D";
                                                      }
                                                      else {
                                                        _DAT_10029964 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glTexSubImage2D");
                                                        if (_DAT_10029964 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glTexSubImage2D";
                                                        }
                                                        else {
                                                          DAT_10029968 = GetProcAddress(DAT_10029a88
                                                                                        ,
                                                  "glTranslated");
                                                  if (DAT_10029968 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glTranslated";
                                                  }
                                                  else {
                                                    DAT_1002996c = GetProcAddress(DAT_10029a88,
                                                                                  "glTranslatef");
                                                    if (DAT_1002996c == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glTranslatef";
                                                    }
                                                    else {
                                                      DAT_10029970 = GetProcAddress(DAT_10029a88,
                                                                                    "glVertex2d");
                                                      if (DAT_10029970 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glVertex2d";
                                                      }
                                                      else {
                                                        _DAT_10029974 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glVertex2dv");
                                                        if (_DAT_10029974 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glVertex2dv";
                                                        }
                                                        else {
                                                          DAT_10029978 = GetProcAddress(DAT_10029a88
                                                                                        ,
                                                  "glVertex2f");
                                                  if (DAT_10029978 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glVertex2f";
                                                  }
                                                  else {
                                                    _DAT_1002997c =
                                                         GetProcAddress(DAT_10029a88,"glVertex2fv");
                                                    if (_DAT_1002997c == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glVertex2fv";
                                                    }
                                                    else {
                                                      _DAT_10029980 =
                                                           GetProcAddress(DAT_10029a88,"glVertex2i")
                                                      ;
                                                      if (_DAT_10029980 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glVertex2i";
                                                      }
                                                      else {
                                                        _DAT_10029984 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glVertex2iv");
                                                        if (_DAT_10029984 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glVertex2iv";
                                                        }
                                                        else {
                                                          _DAT_10029988 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glVertex2s");
                                                          if (_DAT_10029988 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glVertex2s";
                                                          }
                                                          else {
                                                            _DAT_1002998c =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glVertex2sv");
                                                            if (_DAT_1002998c == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glVertex2sv";
                                                            }
                                                            else {
                                                              DAT_10029990 = GetProcAddress(
                                                  DAT_10029a88,"glVertex3d");
                                                  if (DAT_10029990 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glVertex3d";
                                                  }
                                                  else {
                                                    _DAT_10029994 =
                                                         GetProcAddress(DAT_10029a88,"glVertex3dv");
                                                    if (_DAT_10029994 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glVertex3dv";
                                                    }
                                                    else {
                                                      DAT_10029998 = GetProcAddress(DAT_10029a88,
                                                                                    "glVertex3f");
                                                      if (DAT_10029998 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glVertex3f";
                                                      }
                                                      else {
                                                        _DAT_1002999c =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glVertex3fv");
                                                        if (_DAT_1002999c == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glVertex3fv";
                                                        }
                                                        else {
                                                          _DAT_100299a0 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glVertex3i");
                                                          if (_DAT_100299a0 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glVertex3i";
                                                          }
                                                          else {
                                                            _DAT_100299a4 =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glVertex3iv");
                                                            if (_DAT_100299a4 == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glVertex3iv";
                                                            }
                                                            else {
                                                              _DAT_100299a8 =
                                                                   GetProcAddress(DAT_10029a88,
                                                                                  "glVertex3s");
                                                              if (_DAT_100299a8 == (FARPROC)0x0) {
                                                                pcVar1 = "failed\n";
                                                                (*(code *)PTR_FUN_10028344)();
                                                                FUN_10001bf0(pcVar1);
                                                                pcVar1 = "glVertex3s";
                                                              }
                                                              else {
                                                                _DAT_100299ac =
                                                                     GetProcAddress(DAT_10029a88,
                                                                                    "glVertex3sv");
                                                                if (_DAT_100299ac == (FARPROC)0x0) {
                                                                  pcVar1 = "failed\n";
                                                                  (*(code *)PTR_FUN_10028344)();
                                                                  FUN_10001bf0(pcVar1);
                                                                  pcVar1 = "glVertex3sv";
                                                                }
                                                                else {
                                                                  DAT_100299b0 = GetProcAddress(
                                                  DAT_10029a88,"glVertex4d");
                                                  if (DAT_100299b0 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glVertex4d";
                                                  }
                                                  else {
                                                    _DAT_100299b4 =
                                                         GetProcAddress(DAT_10029a88,"glVertex4dv");
                                                    if (_DAT_100299b4 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glVertex4dv";
                                                    }
                                                    else {
                                                      DAT_100299b8 = GetProcAddress(DAT_10029a88,
                                                                                    "glVertex4f");
                                                      if (DAT_100299b8 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "glVertex4f";
                                                      }
                                                      else {
                                                        _DAT_100299bc =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "glVertex4fv");
                                                        if (_DAT_100299bc == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "glVertex4fv";
                                                        }
                                                        else {
                                                          _DAT_100299c0 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "glVertex4i");
                                                          if (_DAT_100299c0 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "glVertex4i";
                                                          }
                                                          else {
                                                            _DAT_100299c4 =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "glVertex4iv");
                                                            if (_DAT_100299c4 == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "glVertex4iv";
                                                            }
                                                            else {
                                                              _DAT_100299c8 =
                                                                   GetProcAddress(DAT_10029a88,
                                                                                  "glVertex4s");
                                                              if (_DAT_100299c8 == (FARPROC)0x0) {
                                                                pcVar1 = "failed\n";
                                                                (*(code *)PTR_FUN_10028344)();
                                                                FUN_10001bf0(pcVar1);
                                                                pcVar1 = "glVertex4s";
                                                              }
                                                              else {
                                                                _DAT_100299cc =
                                                                     GetProcAddress(DAT_10029a88,
                                                                                    "glVertex4sv");
                                                                if (_DAT_100299cc == (FARPROC)0x0) {
                                                                  pcVar1 = "failed\n";
                                                                  (*(code *)PTR_FUN_10028344)();
                                                                  FUN_10001bf0(pcVar1);
                                                                  pcVar1 = "glVertex4sv";
                                                                }
                                                                else {
                                                                  _DAT_100299d0 =
                                                                       GetProcAddress(DAT_10029a88,
                                                                                                                                                                            
                                                  "glVertexPointer");
                                                  if (_DAT_100299d0 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "glVertexPointer";
                                                  }
                                                  else {
                                                    DAT_100299d4 = GetProcAddress(DAT_10029a88,
                                                                                  "glViewport");
                                                    if (DAT_100299d4 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "glViewport";
                                                    }
                                                    else {
                                                      _DAT_100299ec =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "wglCopyContext");
                                                      if (_DAT_100299ec == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "wglCopyContext";
                                                      }
                                                      else {
                                                        DAT_100299f0 = GetProcAddress(DAT_10029a88,
                                                                                                                                                                            
                                                  "wglCreateContext");
                                                  if (DAT_100299f0 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "wglCreateContext";
                                                  }
                                                  else {
                                                    DAT_100299f4 = GetProcAddress(DAT_10029a88,
                                                                                  "wglDeleteContext"
                                                                                 );
                                                    if (DAT_100299f4 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "wglDeleteContext";
                                                    }
                                                    else {
                                                      _DAT_100299f8 =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "wglGetCurrentContext");
                                                      if (_DAT_100299f8 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "wglGetCurrentContext";
                                                      }
                                                      else {
                                                        DAT_100299fc = GetProcAddress(DAT_10029a88,
                                                                                                                                                                            
                                                  "wglGetCurrentDC");
                                                  if (DAT_100299fc == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "wglGetCurrentDC";
                                                  }
                                                  else {
                                                    DAT_10029a00 = GetProcAddress(DAT_10029a88,
                                                                                                                                                                    
                                                  "wglGetProcAddress");
                                                  if (DAT_10029a00 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "wglGetProcAddress";
                                                  }
                                                  else {
                                                    DAT_10029a04 = GetProcAddress(DAT_10029a88,
                                                                                  "wglMakeCurrent");
                                                    if (DAT_10029a04 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "wglMakeCurrent";
                                                    }
                                                    else {
                                                      _DAT_10029a08 =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "wglShareLists");
                                                      if (_DAT_10029a08 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "wglShareLists";
                                                      }
                                                      else {
                                                        DAT_100299d8 = GetProcAddress(DAT_10029a88,
                                                                                                                                                                            
                                                  "wglChoosePixelFormat");
                                                  if (DAT_100299d8 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "wglChoosePixelFormat";
                                                  }
                                                  else {
                                                    _DAT_100299dc =
                                                         GetProcAddress(DAT_10029a88,
                                                                        "wglDescribePixelFormat");
                                                    if (_DAT_100299dc == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "wglDescribePixelFormat";
                                                    }
                                                    else {
                                                      _DAT_100299e0 =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "wglGetPixelFormat");
                                                      if (_DAT_100299e0 == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "wglGetPixelFormat";
                                                      }
                                                      else {
                                                        DAT_100299e4 = GetProcAddress(DAT_10029a88,
                                                                                                                                                                            
                                                  "wglSetPixelFormat");
                                                  if (DAT_100299e4 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "wglSetPixelFormat";
                                                  }
                                                  else {
                                                    _DAT_100299e8 =
                                                         GetProcAddress(DAT_10029a88,
                                                                        "wglSwapBuffers");
                                                    if (_DAT_100299e8 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "wglSwapBuffers";
                                                    }
                                                    else {
                                                      _DAT_10029a0c =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "wglCreateLayerContext");
                                                      if (_DAT_10029a0c == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "wglCreateLayerContext";
                                                      }
                                                      else {
                                                        _DAT_10029a10 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "wglDescribeLayerPlane")
                                                        ;
                                                        if (_DAT_10029a10 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "wglDescribeLayerPlane";
                                                        }
                                                        else {
                                                          _DAT_10029a14 =
                                                               GetProcAddress(DAT_10029a88,
                                                                                                                                                            
                                                  "wglGetLayerPaletteEntries");
                                                  if (_DAT_10029a14 == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "wglGetLayerPaletteEntries";
                                                  }
                                                  else {
                                                    _DAT_10029a18 =
                                                         GetProcAddress(DAT_10029a88,
                                                                        "wglSetLayerPaletteEntries")
                                                    ;
                                                    if (_DAT_10029a18 == (FARPROC)0x0) {
                                                      pcVar1 = "failed\n";
                                                      (*(code *)PTR_FUN_10028344)();
                                                      FUN_10001bf0(pcVar1);
                                                      pcVar1 = "wglSetLayerPaletteEntries";
                                                    }
                                                    else {
                                                      _DAT_10029a1c =
                                                           GetProcAddress(DAT_10029a88,
                                                                          "wglRealizeLayerPalette");
                                                      if (_DAT_10029a1c == (FARPROC)0x0) {
                                                        pcVar1 = "failed\n";
                                                        (*(code *)PTR_FUN_10028344)();
                                                        FUN_10001bf0(pcVar1);
                                                        pcVar1 = "wglRealizeLayerPalette";
                                                      }
                                                      else {
                                                        _DAT_10029a20 =
                                                             GetProcAddress(DAT_10029a88,
                                                                            "wglSwapLayerBuffers");
                                                        if (_DAT_10029a20 == (FARPROC)0x0) {
                                                          pcVar1 = "failed\n";
                                                          (*(code *)PTR_FUN_10028344)();
                                                          FUN_10001bf0(pcVar1);
                                                          pcVar1 = "wglSwapLayerBuffers";
                                                        }
                                                        else {
                                                          _DAT_10029a24 =
                                                               GetProcAddress(DAT_10029a88,
                                                                              "wglUseFontBitmapsA");
                                                          if (_DAT_10029a24 == (FARPROC)0x0) {
                                                            pcVar1 = "failed\n";
                                                            (*(code *)PTR_FUN_10028344)();
                                                            FUN_10001bf0(pcVar1);
                                                            pcVar1 = "wglUseFontBitmapsA";
                                                          }
                                                          else {
                                                            _DAT_10029a28 =
                                                                 GetProcAddress(DAT_10029a88,
                                                                                "wglUseFontBitmapsW"
                                                                               );
                                                            if (_DAT_10029a28 == (FARPROC)0x0) {
                                                              pcVar1 = "failed\n";
                                                              (*(code *)PTR_FUN_10028344)();
                                                              FUN_10001bf0(pcVar1);
                                                              pcVar1 = "wglUseFontBitmapsW";
                                                            }
                                                            else {
                                                              DAT_10029a2c = GetProcAddress(
                                                  DAT_10029a88,"wglUseFontOutlinesA");
                                                  if (DAT_10029a2c == (FARPROC)0x0) {
                                                    pcVar1 = "failed\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    pcVar1 = "wglUseFontOutlinesA";
                                                  }
                                                  else {
                                                    DAT_10029a30 = GetProcAddress(DAT_10029a88,
                                                                                                                                                                    
                                                  "wglUseFontOutlinesW");
                                                  if (DAT_10029a30 != (FARPROC)0x0) {
                                                    pcVar1 = "success\n";
                                                    (*(code *)PTR_FUN_10028344)();
                                                    FUN_10001bf0(pcVar1);
                                                    __security_check_cookie
                                                              (local_8 ^ (uint)&stack0xfffffffc);
                                                    return;
                                                  }
                                                  pcVar1 = "failed\n";
                                                  (*(code *)PTR_FUN_10028344)();
                                                  FUN_10001bf0(pcVar1);
                                                  pcVar1 = "wglUseFontOutlinesW";
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  pcVar2 = "Cannot find function \"%s\" in opengl32.dll!\n";
  (*(code *)PTR_FUN_10028344)("Cannot find function \"%s\" in opengl32.dll!\n",pcVar1);
  FUN_10001c50(pcVar2);
  DAT_10029a8c = 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

