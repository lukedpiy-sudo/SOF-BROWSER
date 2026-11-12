// rea decompile_all
// name: FUN_200f7920
// address: 0x200f7920
// body: available
// range: 0x200f7920-0x200f79a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_200f7920(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = _malloc(0x14);
  *puVar1 = param_1;
  *(undefined2 *)(puVar1 + 1) = param_2;
  *(undefined2 *)((int)puVar1 + 6) = 9999;
  puVar1[2] = param_3;
  switch(param_3) {
  case 0:
    uVar2 = 4;
    uVar3 = 2;
    goto LAB_200f797e;
  case 1:
    uVar2 = 6;
    uVar3 = 2;
    goto LAB_200f797e;
  case 2:
  case 3:
    uVar3 = 2;
    break;
  default:
    uVar3 = 4;
  }
  uVar2 = 8;
LAB_200f797e:
  uVar3 = FUN_200f94a0(8,uVar2,uVar3,&LAB_200f7d10,&LAB_200f7d70,0);
  puVar1[3] = uVar3;
  puVar1[4] = param_4;
  return puVar1;
}

