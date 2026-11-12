// rea decompile_all
// name: FUN_20015fa0
// address: 0x20015fa0
// body: available
// range: 0x20015fa0-0x200163bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20015fa0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_201c1f24 == '\0') {
    if (DAT_201e7f58._3_1_ < 2) {
      if ((DAT_20230314 != '\0') && (DAT_2024af70 != '\0')) {
        if (DAT_2040351c == 0) {
          Sleep(0x32);
          return;
        }
        (*DAT_20403620)();
        if ((*(float *)(DAT_20225e78 + 0x18) == 0.0) && ((char)param_1 == '\0')) {
          if (*(float *)(DAT_20225e94 + 0x18) < 40.0) {
            Cvar_Set(s_viewsize_2011f484,&DAT_2011f7bc);
          }
          if (100.0 < *(float *)(DAT_20225e94 + 0x18)) {
            Cvar_Set(s_viewsize_2011f484,&DAT_2011f668);
          }
          iVar1 = __ftol();
          DAT_20225ed8 = (DAT_2040365c * iVar1) / 100 & 0xfffffff8;
          DAT_20225edc = (DAT_20403660 * iVar1) / 100 & 0xfffffffe;
          DAT_20225ed0 = (int)(DAT_2040365c - DAT_20225ed8) / 2;
          DAT_20225ed4 = (int)(DAT_20403660 - DAT_20225edc) / 2;
          FUN_20014220();
          FUN_20016cd0();
          FUN_20015da0();
          if (DAT_201e7594 != '\0') {
            FUN_2000a300();
          }
          if ((DAT_201e7f48 & 0x10000) != 0) {
            if (DAT_201e7f48._2_2_ != 0) {
              FUN_20014510(&DAT_201e907c);
            }
            _DAT_20225e74 = 0.0;
          }
          FUN_20013db0();
          _DAT_20225ee0 = _DAT_20225ee0 - DAT_201c1f10;
          _DAT_20225a64 = _DAT_20225a64 + DAT_201c1f10;
          if (_DAT_20225ee0 < 0.0 == (_DAT_20225ee0 == 0.0)) {
            FUN_200165a0();
          }
          _DAT_20225e70 = _DAT_20225e70 - DAT_201c1f10;
          if (_DAT_20225e70 < 0.0 == (_DAT_20225e70 == 0.0)) {
            FUN_200163c0();
          }
          if ((DAT_201c1f00 == 8) && (DAT_201e7594 != '\0')) {
            if (_DAT_20225e7c == 0.0) {
              _DAT_20225e7c = (float)DAT_201e8fc4;
            }
            _DAT_20225e74 = _DAT_20225e74 - DAT_201c1f10;
            if (_DAT_20225e74 < 0.0 == (_DAT_20225e74 == 0.0)) {
              if (DAT_201e7efc == '\x02') {
                FUN_20013b70(DAT_2022fef8,DAT_2022ff00,DAT_2022593c);
              }
              else {
                _DAT_20225e74 = 0.0;
              }
            }
          }
          if ((DAT_201e7f48 & 0x800) == 0) {
            FUN_20015b10();
          }
          iVar1 = DAT_2022fef4;
          if (*(float *)(DAT_2022fef4 + 0x18) != 0.0) {
            FUN_20012b20(DAT_201c1f10 * 300.0,0x7f0000ff,0,0xffffffff,0,0xffffffff,0,0xffffffff,0,
                         0xffffffff);
          }
          if ((((*(float *)(DAT_20225a60 + 0x18) != 0.0) || (*(float *)(iVar1 + 0x18) != 0.0)) ||
              (*(float *)(DAT_2022ff04 + 0x18) != 0.0)) || (*(float *)(DAT_20249f44 + 0x18) == 2.0))
          {
            FUN_20012ba0();
          }
          FUN_20013710();
          FUN_20020880();
          if (DAT_20225e98 == 0.0) {
            if ((DAT_201c1f04 == 0) || (DAT_201c1f04 == 2)) {
              FUN_20020d70();
            }
          }
          else {
            FUN_20020f90(DAT_20225e98);
            if ((DAT_20225e98 == 0.5) && ((DAT_201c1f00 != 8 || (DAT_201e7594 == '\0')))) {
              param_1._0_1_ = '\0';
              param_1._1_1_ = 0;
              param_1._2_1_ = 0;
              param_1._3_1_ = 0xff;
              (*DAT_204035e4)(0,DAT_20403660 / 2,DAT_2040365c,DAT_20403660 / 2,&param_1);
            }
          }
          if ((0x3e < DAT_201c23f4 - DAT_201c23e8) && ((DAT_201c1f00 == 7 || (DAT_201c1f00 == 8))))
          {
            (*DAT_204035b8)(DAT_20225ed0 + 0x10,DAT_20225ed4 + 0x10,s_pics_console_net_2011f66c,
                            0xffffffff);
          }
        }
        FUN_200c7e30();
                    /* WARNING: Could not recover jumptable at 0x200163ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_2040362c)();
        return;
      }
    }
    else {
      _DAT_20225ee0 = 0.0;
      _DAT_20225e70 = 0.0;
      _DAT_20225e74 = 0.0;
    }
  }
  return;
}

