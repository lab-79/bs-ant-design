open! Antd;

let str = React.string;

[@react.component]
let make = () =>
  <Section name="Alert">
    <Alert message={"Success Text" |> str} _type=`success />
    <Alert message={"Info Text" |> str} _type=`info />
    <Alert message={"Warning Text" |> str} _type=`warning />
    <Alert message={"Error Text" |> str} _type=`error />
    <Alert message={"Closable" |> str} _type=`error closable=true />
    <Alert
      message={"Success Text" |> str}
      _type=`success
      description={"Description Hey Description Hey" |> str}
    />
    <Alert message={"Success Text" |> str} _type=`success showIcon=true />
    <Alert message={"Success Text" |> str} _type=`success banner=true />
    <Alert
      message={"Info Text" |> str}
      _type=`info
      closeText={"Close Now" |> str}
    />
  </Section>;