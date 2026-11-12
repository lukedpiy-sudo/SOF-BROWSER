// rea decompile_all
// name: FUN_200f2980
// address: 0x200f2980
// body: available
// range: 0x200f2980-0x200f2a1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f2980(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  pcVar5 = (char *)(param_1 + 0x160);
  iVar3 = FUN_200faaf0(s_0123456789_20159b44,(int)*(char *)(param_1 + 0x160));
  bVar6 = iVar3 != 0;
  cVar2 = *pcVar5;
  pcVar4 = pcVar5;
  while (cVar2 != '\0') {
    iVar3 = FUN_200faaf0(s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_20159af8,(int)cVar2);
    if (iVar3 == 0) {
      bVar6 = true;
    }
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    cVar2 = *pcVar1;
  }
  if (bVar6) {
    pcVar5 = &DAT_2011d31c;
  }
  FUN_200f3a80(param_1 + 0x18,s_NICK__s_20159af0,pcVar5);
  FUN_200f3a80(param_1 + 0x18,s_USER__s__s__s___s_20159ad0,param_1 + 0x260,s_127_0_0_1_20159ae4,
               param_1 + 0x2e4,param_1 + 0x1e0);
  return;
}

