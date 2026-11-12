// rea decompile_all
// name: FUN_200c9560
// address: 0x200c9560
// body: available
// range: 0x200c9560-0x200c969a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200c95aa) */

void FUN_200c9560(undefined1 param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 local_34 [4];
  undefined4 *local_30;
  uint local_2c;
  char *local_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_3;
  puVar5 = param_2;
  puStack_8 = &LAB_2010e198;
  local_c = ExceptionList;
  local_4 = 0;
  local_34[0] = param_1;
  local_30 = (undefined4 *)0x0;
  local_2c = 0;
  local_28 = (char *)0x0;
  if (local_34 == &param_1) {
    ExceptionList = &local_c;
    FUN_20027e40(param_3,0xffffffff);
    FUN_20027e40(0,0);
    puVar5 = param_2;
  }
  else {
    if (param_3 != 0) {
      puVar3 = (undefined4 *)&DAT_201116cc;
      if (param_2 != (undefined4 *)0x0) {
        puVar3 = param_2;
      }
      if ((int)(uint)*(byte *)((int)puVar3 + -1) < -1) {
        ExceptionList = &local_c;
        FUN_2000a5b0(1);
        local_30 = (undefined4 *)&DAT_201116cc;
        if (puVar5 != (undefined4 *)0x0) {
          local_30 = puVar5;
        }
        local_2c = param_3;
        local_28 = (char *)param_4;
        *(char *)((int)local_30 + -1) = *(char *)((int)local_30 + -1) + '\x01';
        goto LAB_200c965d;
      }
    }
    ExceptionList = &local_c;
    cVar2 = FUN_2000a6c0(param_3,1);
    if (cVar2 != '\0') {
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_201116cc;
      }
      puVar3 = local_30;
      for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      FUN_2000a6a0(uVar1);
      puVar5 = param_2;
    }
  }
LAB_200c965d:
  FUN_200cbb10();
  if (puVar5 != (undefined4 *)0x0) {
    local_28 = (char *)((int)puVar5 + -1);
    if (*(char *)((int)puVar5 + -1) == '\0') {
      local_2c = 0x200c9683;
      FUN_200f9f75();
    }
    else {
      *local_28 = *(char *)((int)puVar5 + -1) + -1;
    }
  }
  ExceptionList = local_c;
  return;
}

