// rea decompile_all
// name: FUN_2005c090
// address: 0x2005c090
// body: available
// range: 0x2005c090-0x2005c1e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005c090(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_200fa720();
  if (DAT_2039df00 != 0) {
    puVar3 = (undefined4 *)&stack0x00000018;
    for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    FUN_2001e700(&stack0x00000000,&stack0x0000008c,0x8000);
    FUN_2001cb00(&stack0x00000000,0x17);
    FUN_2001cbf0(&stack0x00000000,DAT_203a1f30);
    FUN_2001cc80(&stack0x00000000,DAT_203a1f2c);
    FUN_2001cb00(&stack0x00000000,0x15);
    iVar4 = 1;
    iVar2 = *(int *)(DAT_20396dd8 + 100) + *(int *)(DAT_20396dd8 + 0x60);
    if (1 < *(int *)(DAT_20396dd8 + 0x68)) {
      do {
        if ((*(byte *)(iVar2 + 0x118) & 1) == 0) {
          if (((*(int *)(iVar2 + 0x20) == 0) && (*(int *)(iVar2 + 0x30) == 0)) &&
             (*(int *)(iVar2 + 0x3c) == 0)) {
            iVar1 = FUN_2001f2d0(iVar2);
            if ((iVar1 == 0) && (*(int *)(iVar2 + 0x44) == 0)) goto LAB_2005c169;
          }
          FUN_2001d4f0(&stack0x00000018,iVar2,&stack0x00000000,0);
        }
LAB_2005c169:
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 0x19c;
      } while (iVar4 < *(int *)(DAT_20396dd8 + 0x68));
    }
    FUN_2001cb70(&stack0x00000000,0);
    FUN_2001e7b0(&stack0x00000000,DAT_2039df08,DAT_2039df10);
    FUN_2001e730(&DAT_2039df04);
    param_5 = param_3;
    FUN_20025300(&param_5,4,DAT_2039df00);
    FUN_20025300(param_1,param_3,DAT_2039df00);
  }
  return;
}

