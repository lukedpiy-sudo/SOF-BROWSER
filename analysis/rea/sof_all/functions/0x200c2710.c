// rea decompile_all
// name: FUN_200c2710
// address: 0x200c2710
// body: available
// range: 0x200c2710-0x200c286d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200c27db) */

void FUN_200c2710(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,char param_5)

{
  uint *puVar1;
  char cVar2;
  char *in_ECX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_4;
  
  if (in_ECX[1] == '\0') {
    *in_ECX = '\x01';
    in_ECX[1] = '\x01';
    in_ECX[2] = param_5;
LAB_200c2731:
    if (in_ECX[2] == param_5) {
      cVar2 = '\x01';
      goto LAB_200c2745;
    }
  }
  else if (*in_ECX != '\0') goto LAB_200c2731;
  cVar2 = '\0';
LAB_200c2745:
  *in_ECX = cVar2;
  if (cVar2 != '\0') {
    *(int *)(in_ECX + 4) = param_3 + 1;
    return;
  }
  uVar5 = param_3 + 1;
  local_4 = -(uint)(in_ECX[2] != '\0');
  uVar4 = uVar5 & 0x8000001f;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xffffffe0) + 1;
  }
  uVar5 = (uint)(uVar4 != 0) + ((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5);
  iVar3 = *(int *)(in_ECX + 0xc);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)(in_ECX + 0x10) - iVar3 >> 2;
  }
  if (uVar4 < uVar5) {
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(in_ECX + 0x10) - iVar3 >> 2;
    }
    FUN_200a8890(*(undefined4 *)(in_ECX + 0x10),uVar5 - iVar3,&local_4);
  }
  else if ((iVar3 != 0) && (uVar5 < (uint)(*(int *)(in_ECX + 0x10) - iVar3 >> 2))) {
    *(uint *)(in_ECX + 0x10) = iVar3 + uVar5 * 4;
  }
  if (param_5 == '\0') {
    puVar1 = (uint *)(*(int *)(in_ECX + 0xc) + ((int)(param_3 + (param_3 >> 0x1f & 0x1fU)) >> 5) * 4
                     );
    *puVar1 = *puVar1 & ~(1 << ((byte)param_3 & 0x1f));
    *(int *)(in_ECX + 4) = param_3 + 1;
    return;
  }
  puVar1 = (uint *)(*(int *)(in_ECX + 0xc) + ((int)(param_3 + (param_3 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *(int *)(in_ECX + 4) = param_3 + 1;
  return;
}

