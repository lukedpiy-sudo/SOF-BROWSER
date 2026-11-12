// rea decompile_all
// name: FUN_200f8270
// address: 0x200f8270
// body: available
// range: 0x200f8270-0x200f8389 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200f8270(undefined4 *param_1)

{
  int iVar1;
  DWORD DVar2;
  undefined4 *puStack_714;
  undefined4 uStack_710;
  undefined1 *puStack_70c;
  char *pcStack_708;
  undefined4 uStack_6fc;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_6e0;
  undefined4 local_6dc;
  undefined1 auStack_5f0 [20];
  undefined1 auStack_5dc [1500];
  
  local_6f8 = 0;
  local_6f4 = 0;
  while( true ) {
    local_6dc = param_1[0x22];
    pcStack_708 = (char *)&local_6f8;
    puStack_70c = (undefined1 *)0x0;
    puStack_714 = &local_6e0;
    uStack_710 = 0;
    local_6e0 = 1;
    iVar1 = Ordinal_18(0x40);
    if ((iVar1 == -1) || (iVar1 == 0)) break;
    iVar1 = Ordinal_17(param_1[0x22],auStack_5f0,0x5db,0,&stack0xfffff8fc,&puStack_714);
    if (iVar1 != -1) {
      puStack_70c = auStack_5dc;
      pcStack_708 = s__final__2015a8e8;
      uStack_710 = 0x200f8302;
      iVar1 = FUN_200fa6a0();
      if (iVar1 != 0) {
        puStack_70c = (undefined1 *)0x200f8313;
        uStack_710 = Ordinal_15();
        pcStack_708 = (char *)param_1[0x25];
        puStack_70c = (undefined1 *)0x5;
        uStack_6fc = FUN_200f7920();
        FUN_200f44d0(param_1[1],&uStack_6fc);
      }
    }
  }
  DVar2 = GetTickCount();
  if (3000 < DVar2 - param_1[0x23]) {
    Ordinal_3(param_1[0x22]);
    param_1[0x22] = 0xffffffff;
    *param_1 = 3;
    (*(code *)param_1[0x1e])(param_1,1,param_1[0x1f],0,0);
  }
  return 0;
}

