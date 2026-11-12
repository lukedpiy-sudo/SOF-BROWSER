// rea decompile_all
// name: FUN_200ef6f0
// address: 0x200ef6f0
// body: available
// range: 0x200ef6f0-0x200ef807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ef6f0(int param_1,char *param_2,char *param_3,int param_4,char *param_5,char *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char local_214 [127];
  undefined1 local_195;
  char local_194 [23];
  undefined1 local_17d;
  char local_17c [23];
  undefined1 local_165;
  undefined4 local_164;
  uint local_160;
  uint local_15c;
  char local_158 [344];
  
  iVar2 = -(int)param_3;
  do {
    cVar1 = *param_3;
    param_3[(int)(local_158 + iVar2)] = cVar1;
    param_3 = param_3 + 1;
  } while (cVar1 != '\0');
  iVar2 = FUN_200f9600(*(undefined4 *)(param_1 + 0x37c),local_158);
  if (iVar2 != 0) {
    pcVar4 = local_214;
    for (iVar3 = 0x2f; iVar3 != 0; iVar3 = iVar3 + -1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + 4;
    }
    _strncpy(local_214,param_2,0x80);
    local_195 = 0;
    if ((param_5 == (char *)0x0) || (param_6 == (char *)0x0)) {
      local_164 = 0;
    }
    else {
      _strncpy(local_194,param_5,0x18);
      local_17d = 0;
      _strncpy(local_17c,param_6,0x18);
      local_165 = 0;
      local_164 = 1;
    }
    local_15c = (uint)(param_4 == 2);
    local_160 = (uint)(param_4 == 1);
    FUN_200f9550(*(undefined4 *)(iVar2 + 0xac),local_214);
  }
  return;
}

