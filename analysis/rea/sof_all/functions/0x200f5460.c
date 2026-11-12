// rea decompile_all
// name: FUN_200f5460
// address: 0x200f5460
// body: available
// range: 0x200f5460-0x200f5561 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f5460(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char local_100 [256];
  
  piVar8 = DAT_20396eec;
  if (DAT_20396de0 != 0) {
    iVar6 = 0;
    iVar2 = __ftol();
    if (0 < iVar2) {
      piVar7 = piVar8 + 1;
      do {
        if (*piVar8 == 3) {
          uVar3 = FUN_20055590(piVar7,s_teamname_2011e39c);
          uVar3 = FUN_20055590(piVar7,&DAT_2011e394,iVar6,uVar3);
          Com_sprintf(local_100,0x100,s__player__d__s_frags__d__d_ping___20159fec,iVar6,
                      piVar7 + 0xa6,iVar6,(int)*(short *)(*(int *)(piVar7[0xa5] + 0x74) + 0xb8),
                      iVar6,piVar7[0x98],iVar6,uVar3);
          uVar4 = 0xffffffff;
          pcVar9 = local_100;
          do {
            pcVar11 = pcVar9;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar11 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar11;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
          iVar2 = -1;
          pcVar9 = param_1;
          do {
            pcVar10 = pcVar9;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar10 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar10;
          } while (cVar1 != '\0');
          pcVar9 = pcVar11 + -uVar4;
          pcVar11 = pcVar10 + -1;
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar11 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar11 = pcVar11 + 1;
          }
        }
        piVar8 = piVar8 + 0x34ab;
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 0x34ab;
        iVar2 = __ftol();
      } while (iVar6 < iVar2);
    }
  }
  return;
}

