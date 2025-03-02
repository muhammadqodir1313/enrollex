object yonalish: Tyonalish
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  ClientHeight = 411
  ClientWidth = 362
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clRed
  Font.Height = -19
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 23
  object Label1: TLabel
    Left = 96
    Top = 64
    Width = 122
    Height = 23
    Caption = 'Yo'#39'nalish Nomi'
  end
  object BitBtn1: TBitBtn
    Left = 48
    Top = 248
    Width = 97
    Height = 25
    Kind = bkCancel
    NumGlyphs = 2
    TabOrder = 0
    OnClick = BitBtn1Click
  end
  object BitBtn2: TBitBtn
    Left = 200
    Top = 248
    Width = 75
    Height = 25
    Kind = bkOK
    NumGlyphs = 2
    TabOrder = 1
    OnClick = BitBtn2Click
  end
  object DBEdit1: TDBEdit
    Left = 96
    Top = 136
    Width = 145
    Height = 31
    DataField = 'bolim'
    DataSource = DM.DSYo
    TabOrder = 2
  end
end
