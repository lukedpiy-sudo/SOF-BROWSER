// rea decompile_all
// name: FUN_50001090
// address: 0x50001090
// body: available
// range: 0x50001090-0x50001314 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50001090(undefined1 *param_1)

{
  char cVar1;
  byte bVar2;
  undefined3 extraout_var;
  char *pcVar3;
  
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
    bVar2 = FUN_500013a0();
    switch(CONCAT31(extraout_var,bVar2)) {
    case 0:
    case 2:
      pcVar3 = &DAT_5012f4a4;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x5012f4a4)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    default:
      pcVar3 = &DAT_5012f3ac;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x5012f3ac)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      break;
    case 3:
      pcVar3 = &DAT_5012f49c;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x5012f49c)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 4:
      pcVar3 = &DAT_5012f494;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x5012f494)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 5:
      pcVar3 = &DAT_5012f48c;
      do {
        cVar1 = *pcVar3;
        pcVar3[(int)(param_1 + -0x5012f48c)] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 6:
      pcVar3 = &DAT_5012f484;
      do {
        cVar1 = *pcVar3;
        pcVar3[(int)(param_1 + -0x5012f484)] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 7:
      pcVar3 = &DAT_5012f47c;
      do {
        cVar1 = *pcVar3;
        pcVar3[(int)(param_1 + -0x5012f47c)] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 8:
      pcVar3 = &DAT_5012f474;
      do {
        cVar1 = *pcVar3;
        pcVar3[(int)(param_1 + -0x5012f474)] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 9:
      pcVar3 = &DAT_5012f46c;
      do {
        cVar1 = *pcVar3;
        pcVar3[(int)(param_1 + -0x5012f46c)] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 10:
      pcVar3 = &DAT_5012f464;
      do {
        cVar1 = *pcVar3;
        pcVar3[(int)(param_1 + -0x5012f464)] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 0xb:
      pcVar3 = &DAT_5012f45c;
      do {
        cVar1 = *pcVar3;
        pcVar3[(int)(param_1 + -0x5012f45c)] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 0xc:
      pcVar3 = &DAT_5012f454;
      do {
        cVar1 = *pcVar3;
        pcVar3[(int)(param_1 + -0x5012f454)] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 0xd:
      pcVar3 = &DAT_5012f44c;
      do {
        cVar1 = *pcVar3;
        pcVar3[(int)(param_1 + -0x5012f44c)] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 0xe:
      pcVar3 = &DAT_5012f444;
      do {
        cVar1 = *pcVar3;
        pcVar3[(int)(param_1 + -0x5012f444)] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 0xf:
      pcVar3 = &DAT_5012f43c;
      do {
        cVar1 = *pcVar3;
        pcVar3[(int)(param_1 + -0x5012f43c)] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 0x10:
      pcVar3 = &DAT_5012f434;
      do {
        cVar1 = *pcVar3;
        pcVar3[(int)(param_1 + -0x5012f434)] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 0x11:
      pcVar3 = &DAT_5012f42c;
      do {
        cVar1 = *pcVar3;
        pcVar3[(int)(param_1 + -0x5012f42c)] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 0x12:
      pcVar3 = &DAT_5012f424;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x5012f424)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 0x13:
      pcVar3 = &DAT_5012f41c;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x5012f41c)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 0x14:
      pcVar3 = &DAT_5012f414;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x5012f414)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 0x15:
      pcVar3 = &DAT_5012f40c;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x5012f40c)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 0x16:
      pcVar3 = &DAT_5012f404;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x5012f404)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 0x17:
      pcVar3 = &DAT_5012f3fc;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x5012f3fc)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 0x18:
      pcVar3 = &DAT_5012f3f4;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x5012f3f4)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 0x19:
      pcVar3 = &DAT_5012f3ec;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x5012f3ec)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 0x1a:
      pcVar3 = &DAT_5012f3e4;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x5012f3e4)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 0x1b:
      pcVar3 = &DAT_5012f3dc;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x5012f3dc)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 0x1c:
      pcVar3 = &DAT_5012f3d4;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x5012f3d4)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 0x1d:
      pcVar3 = &DAT_5012f3cc;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x5012f3cc)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 0x1e:
      pcVar3 = &DAT_5012f3c4;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x5012f3c4)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 0x1f:
      pcVar3 = &DAT_5012f3bc;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x5012f3bc)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 0x20:
      pcVar3 = &DAT_5012f3b4;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x5012f3b4)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    }
  }
  return;
}

