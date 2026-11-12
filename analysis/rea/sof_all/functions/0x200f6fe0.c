// rea decompile_all
// name: FUN_200f6fe0
// address: 0x200f6fe0
// body: available
// range: 0x200f6fe0-0x200f7087 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f6fe0(undefined *param_1)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char local_100 [256];
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_DAT_2015a828;
  }
  FUN_200fabac(local_100,s__heartbeat__d_gamename__s_2015a8a0,*(undefined4 *)(param_1 + 0xe4),
               param_1 + 8);
  iVar3 = -1;
  pcVar6 = local_100;
  do {
    pcVar5 = pcVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar5 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar5;
  } while (cVar1 != '\0');
  *(undefined4 *)(pcVar5 + -1) = s__statechanged__2015a8bc._0_4_;
  *(undefined4 *)(pcVar5 + 3) = s__statechanged__2015a8bc._4_4_;
  *(undefined4 *)(pcVar5 + 7) = s__statechanged__2015a8bc._8_4_;
  *(undefined2 *)(pcVar5 + 0xb) = s__statechanged__2015a8bc._12_2_;
  pcVar5[0xd] = s__statechanged__2015a8bc[0xe];
  uVar4 = 0xffffffff;
  pcVar6 = local_100;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  Ordinal_20(*(undefined4 *)(param_1 + 4),local_100,~uVar4 - 1,0);
  DVar2 = GetTickCount();
  *(DWORD *)(param_1 + 0xd8) = DVar2;
  return;
}

