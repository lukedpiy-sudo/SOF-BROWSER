// rea decompile_all
// name: FUN_20047d70
// address: 0x20047d70
// body: available
// range: 0x20047d70-0x20047f3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_20047d70(char *param_1)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  int local_10c [2];
  undefined1 local_104 [260];
  
  piVar3 = (int *)**(int **)(in_ECX + 0x2fc);
  if (piVar3 != *(int **)(in_ECX + 0x2fc)) {
    do {
      FUN_200f9f75(piVar3[2]);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(in_ECX + 0x2fc));
  }
  iVar2 = *(int *)(in_ECX + 0x300);
  while (iVar2 != 0) {
    FUN_200ba400(local_10c,**(undefined4 **)(in_ECX + 0x2fc));
    iVar2 = *(int *)(in_ECX + 0x300);
  }
  piVar3 = (int *)**(int **)(in_ECX + 0x308);
  if (piVar3 != *(int **)(in_ECX + 0x308)) {
    do {
      FUN_200f9f75(piVar3[2]);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(in_ECX + 0x308));
  }
  iVar2 = *(int *)(in_ECX + 0x30c);
  while (iVar2 != 0) {
    FUN_200ba400(local_10c,**(undefined4 **)(in_ECX + 0x308));
    iVar2 = *(int *)(in_ECX + 0x30c);
  }
  piVar3 = (int *)**(int **)(in_ECX + 0x314);
  if (piVar3 != *(int **)(in_ECX + 0x314)) {
    do {
      FUN_200f9f75(piVar3[2]);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(in_ECX + 0x314));
  }
  iVar2 = *(int *)(in_ECX + 0x318);
  while (iVar2 != 0) {
    piVar3 = (int *)**(int **)(in_ECX + 0x314);
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    FUN_200f9f75(piVar3);
    iVar2 = *(int *)(in_ECX + 0x318) + -1;
    *(int *)(in_ECX + 0x318) = iVar2;
  }
  *(undefined1 *)(in_ECX + 0x31c) = 0;
  *(undefined1 *)(in_ECX + 0x34e) = 0;
  *(undefined1 *)(in_ECX + 0x1f8) = 0;
  *(undefined1 *)(in_ECX + 0x68) = 0;
  *(undefined1 *)(in_ECX + 0xcc) = 0;
  *(undefined1 *)(in_ECX + 0x130) = 0;
  *(undefined1 *)(in_ECX + 0x194) = 0;
  *(undefined1 *)(in_ECX + 0x22a) = 0;
  *(undefined4 *)(in_ECX + 0x2f4) = 0;
  if (param_1 != (char *)0x0) {
    iVar2 = (in_ECX + 4) - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[iVar2] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    local_10c[1] = 0;
    Com_sprintf(local_104,0x104,s_Ghoul_pmodels__s_20135024,in_ECX + 4);
    local_10c[0] = FUN_20047a50(local_104,local_10c + 1);
    if (local_10c[0] == -1) {
      *(undefined1 *)(in_ECX + 0x2f2) = 0;
      return;
    }
    do {
      cVar1 = FUN_20047680(local_10c,local_10c + 1);
    } while (cVar1 != '\0');
    *(undefined1 *)(in_ECX + 0x2f2) = 1;
  }
  return;
}

