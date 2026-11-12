// rea decompile_all
// name: FUN_200130d0
// address: 0x200130d0
// body: available
// range: 0x200130d0-0x200132a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_200130d0(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  int local_10;
  float local_c;
  int local_8;
  float local_4;
  
  _DAT_20225ee0 = 0.0;
  if (param_1 != 0) {
    fVar5 = (float10)FUN_200fafcc(param_1);
    local_c = (float)fVar5;
    iVar4 = FUN_200faaf0(param_1 + 1,0x3b);
    if (iVar4 != 0) {
      fVar5 = (float10)FUN_200fafcc(iVar4 + 1);
      local_4 = (float)fVar5;
      iVar4 = FUN_200faaf0(iVar4 + 1,0x3b);
      if (iVar4 != 0) {
        fVar5 = (float10)FUN_200fafcc(iVar4 + 1);
        iVar4 = FUN_200faaf0(iVar4 + 1,0x3b);
        if (iVar4 != 0) {
          fVar6 = (float10)FUN_200fafcc(iVar4 + 1);
          iVar4 = FUN_200faaf0(iVar4 + 1,0x3b);
          if (iVar4 != 0) {
            fVar7 = (float10)FUN_200fafcc(iVar4 + 1);
            iVar4 = FUN_200faaf0(iVar4 + 1,0x3b);
            if (iVar4 != 0) {
              uVar1 = FUN_200f9e13(iVar4 + 1);
              iVar4 = FUN_200faaf0(iVar4 + 1,0x3b);
              if (iVar4 != 0) {
                uVar2 = FUN_200f9e13(iVar4 + 1);
                iVar4 = FUN_200faaf0(iVar4 + 1,0x3b);
                if (iVar4 != 0) {
                  uVar3 = FUN_200f9e13(iVar4 + 1);
                  iVar4 = FUN_200faaf0(iVar4 + 1,0x3b);
                  if (iVar4 != 0) {
                    Com_sprintf(&DAT_202259f8,0x40,s_pics__s_2011eef8,iVar4 + 1);
                    param_1 = CONCAT13(0xff,CONCAT12(uVar3,CONCAT11(uVar2,uVar1)));
                    _DAT_20225a64 = 0;
                    DAT_2022ff08 = param_1;
                    _DAT_20225a50 = (float)fVar6;
                    _DAT_20225a6c = (float)fVar7;
                    _DAT_20225ee0 = (float)fVar5;
                    (*DAT_204035b4)(&local_10,&local_8,&DAT_202259f8);
                    _DAT_20230318 = (float)(DAT_2040365c - local_10) * local_c * 0.01;
                    _DAT_2023031c = (float)(DAT_20403660 - local_8) * local_4 * 0.01;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

