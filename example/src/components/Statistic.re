open! Antd;

let str = React.string;

[@react.component]
let make = () =>
  <Section name="Statistic">
    <div>
      <Statistic
        title={"Account Balance (CNY)" |> str}
        value=112893
        precision=2
      />
    </div>
  </Section> /*  */;