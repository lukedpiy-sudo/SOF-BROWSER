// rea decompile_all
// name: FUN_200f3840
// address: 0x200f3840
// body: available
// range: 0x200f3840-0x200f3984 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f3840(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 uStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  undefined4 *puStack_4;
  
  if (param_2 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    local_308 = param_1;
    local_30c = 1;
    puVar5 = &local_30c;
  }
  if (param_3 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    local_204 = param_1;
    local_208 = 1;
    puVar3 = &local_208;
  }
  if (param_4 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    local_100 = param_1;
    local_104 = 1;
    puVar4 = &local_104;
  }
  local_314 = 0;
  local_310 = 0;
  iVar1 = Ordinal_18(0x40,puVar5,puVar3,puVar4,&local_314);
  if (iVar1 != -1) {
    if (puStack_c != (undefined4 *)0x0) {
      if ((iVar1 < 1) || (iVar2 = Ordinal_151(uStack_10,puVar5), iVar2 == 0)) {
        *puStack_c = 0;
      }
      else {
        *puStack_c = 1;
      }
    }
    if (puStack_8 != (undefined4 *)0x0) {
      if ((iVar1 < 1) || (iVar2 = Ordinal_151(uStack_10,puVar3), iVar2 == 0)) {
        *puStack_8 = 0;
      }
      else {
        *puStack_8 = 1;
      }
    }
    if (puStack_4 != (undefined4 *)0x0) {
      if ((0 < iVar1) && (iVar1 = Ordinal_151(uStack_10,puVar4), iVar1 != 0)) {
        *puStack_4 = 1;
        return;
      }
      *puStack_4 = 0;
    }
    return;
  }
  return;
}

