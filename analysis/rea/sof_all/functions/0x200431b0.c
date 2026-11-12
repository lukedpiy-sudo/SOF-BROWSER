// rea decompile_all
// name: FUN_200431b0
// address: 0x200431b0
// body: available
// range: 0x200431b0-0x2004345a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_200431b0(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(float *)(DAT_2036437c + 0x18) != 0.0) {
    if (*(float *)(DAT_20364378 + 0x18) < 0.0) {
      Cvar_SetValue(s_fx_editsegment_20132e98,0x40800000);
    }
    if (4.0 < *(float *)(DAT_20364378 + 0x18)) {
      Cvar_SetValue(s_fx_editsegment_20132e98,0);
    }
    FUN_2002ec50();
    uVar1 = __ftol();
    FUN_2002e6f0(uVar1);
    if (DAT_2027c478 + 120.0 < _DAT_203645b4) {
      _DAT_203645b4 = DAT_2027c478;
    }
    if (*(float *)(DAT_2036436c + 0x18) == 0.0) {
      if ((DAT_20364548 != 1) || (DAT_2027c478 <= _DAT_203645b4)) goto LAB_2004342e;
      if (DAT_2036454c == DAT_20364550) {
        fVar5 = (float10)DAT_2036454c;
      }
      else {
        fVar5 = (float10)flrand(DAT_2036454c,DAT_20364550);
      }
      _DAT_203645b4 = (float)((float10)DAT_2027c478 + fVar5);
    }
    iVar3 = 0;
    local_84 = 0;
    local_80 = 0;
    local_7c = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 1;
    local_60 = 0x3f800000;
    local_5c = 0;
    local_58 = 0;
    local_48 = 0;
    local_44 = 0x3f800000;
    local_40 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0x3f800000;
    local_4 = 0;
    local_8 = 0;
    local_c = 0;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0x42000000;
    piVar4 = &DAT_2032faa8;
    iVar2 = 0;
    do {
      if (*piVar4 == 0) {
        (&DAT_2032faa8)[iVar3 * 0xd3] = 1;
        if ((iVar3 * 0xd3 & 0x3fffffffU) != 0x37f34228) {
          FUN_20041da0(&DAT_20364548,&local_84,1);
        }
        break;
      }
      iVar2 = iVar2 + 0x34c;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0xd3;
    } while (iVar2 < 0x34c00);
    Cvar_SetValue(s_fx_run_20132eb0,0);
  }
LAB_2004342e:
  iVar2 = in_ECX + 0xd808;
  iVar3 = 0x100;
  do {
    if (*(int *)(iVar2 + 0x348) != 0) {
      FUN_20041f80();
    }
    iVar2 = iVar2 + 0x34c;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

