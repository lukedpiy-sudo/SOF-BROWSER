// rea decompile_all
// name: FUN_5008e820
// address: 0x5008e820
// body: available
// range: 0x5008e820-0x5008e970 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5008e820(int *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined1 auStack_cc [48];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 local_8c;
  float afStack_88 [16];
  undefined4 local_48;
  float afStack_44 [16];
  undefined4 local_4;
  
  local_e4 = (float)param_1[1];
  local_e0 = (float)param_1[2];
  local_dc = (float)param_1[3];
  local_48 = 0;
  local_4 = 0;
  local_8c = 0;
  local_e8 = 0x43fa0000;
  if ((char *)param_1[0x71] != (char *)0x0) {
    uVar1 = FUN_500c2e80((char *)param_1[0x71]);
    if (uVar1 != 0) {
      piVar2 = (int *)(**(code **)(**(int **)(uVar1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar2 + 0x1c))(s_sbolt_mouth_5012f8c8);
      if ((short)uVar3 != 0) {
        FUN_500c3da0((undefined4 *)(uVar1 + 4),(float *)(uVar1 + 0x10),afStack_88);
        (**(code **)(**(int **)(uVar1 + 0x164) + 200))(DAT_5015ccdc,afStack_44,uVar3,5,1);
        FUN_500ed0d0(auStack_cc,afStack_44,afStack_88);
        fStack_d8 = fStack_9c - local_e4;
        fStack_d4 = fStack_98 - local_e0;
        fStack_d0 = fStack_94 - local_dc;
        if (*(int **)(uVar1 + 0x450) != (int *)0x0) {
          piVar2 = (int *)(**(code **)(**(int **)(uVar1 + 0x450) + 0x18c))();
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 0x164))(2);
            FUN_50065b40(&DAT_50159b18,param_1[0xc6],(int)param_1,param_1 + 1,&fStack_d8,0,&local_e8
                        );
          }
        }
      }
    }
  }
  FUN_500c3880(param_1);
  return;
}

