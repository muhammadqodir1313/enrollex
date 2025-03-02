object guruh: Tguruh
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  ClientHeight = 377
  ClientWidth = 415
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clBlue
  Font.Height = -19
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 23
  object Label1: TLabel
    Left = 37
    Top = 40
    Width = 100
    Height = 23
    Caption = 'Guruh nomi'
  end
  object DBEdit1: TDBEdit
    Left = 152
    Top = 37
    Width = 121
    Height = 31
    DataField = 'guruh'
    DataSource = DM.DSGu
    TabOrder = 0
  end
  object BitBtn1: TBitBtn
    Left = 37
    Top = 120
    Width = 89
    Height = 25
    Kind = bkCancel
    NumGlyphs = 2
    TabOrder = 1
    OnClick = BitBtn1Click
  end
  object BitBtn2: TBitBtn
    Left = 184
    Top = 120
    Width = 89
    Height = 25
    Kind = bkOK
    NumGlyphs = 2
    TabOrder = 2
    OnClick = BitBtn2Click
  end
end
