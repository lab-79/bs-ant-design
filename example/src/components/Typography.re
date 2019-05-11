open Antd;

let str = React.string;

module Title = Antd.Typography.Title;
module Paragraph = Antd.Typography.Paragraph;
module Text = Antd.Typography.Text;

[@react.component]
let make = () =>
  <Section name="Typography">
    <div>
      <Title> {"Introduction" |> str} </Title>
      <Paragraph>
        {"In the process of internal desktop applications development, many different design specs and implementations would be involved, which might cause designers and developers difficulties and duplication and reduce the efficiency of development.
    "
         |> str}
      </Paragraph>
      <Paragraph>
        {"After massive project practice and summaries, Ant Design, a design language for background applications, is refined by Ant UED Team, which aims to"
         |> str}
        <Text strong=true>
          {"uniform the user interface specs for internal background projects, lower the unnecessary cost of design differences and implementation and liberate the resources of design and front-end development"
           |> str}
        </Text>
      </Paragraph>
      <Title level=2> {"Guidelines and Resources" |> str} </Title>
      <Paragraph>
        {"We supply a series of design principles, practical patterns and high quality design resources"
         |> str}
        <Text code=true> {"Sketch" |> str} </Text>
        {"and" |> str}
        <Text code=true> {"Axure" |> str} </Text>
        {", to help people create their product prototypes beautifully and efficiently."
         |> str}
      </Paragraph>
      <Paragraph>
        <ul>
          <li> <a href="/docs/spec/proximity"> {"Principles" |> str} </a> </li>
          <li>
            <a href="/docs/pattern/navigation"> {"Patterns" |> str} </a>
          </li>
          <li>
            <a href="/docs/resource/download">
              {"Resource Download" |> str}
            </a>
          </li>
        </ul>
      </Paragraph>
    </div>
    <div>
      <Text> {"Ant Design" |> str} </Text>
      <br />
      <Text _type=`secondary> {"Ant Design" |> str} </Text>
      <br />
      <Text _type=`warning> {"Ant Design" |> str} </Text>
      <br />
      <Text _type=`danger> {"Ant Design" |> str} </Text>
      <br />
      <Text disabled=true> {"Ant Design" |> str} </Text>
      <br />
      <Text mark=true> {"Ant Design" |> str} </Text>
      <br />
      <Text code=true> {"Ant Design" |> str} </Text>
      <br />
      <Text underline=true> {"Ant Design" |> str} </Text>
      <br />
      <Text delete=true> {"Ant Design" |> str} </Text>
      <br />
      <Text strong=true> {"Ant Design" |> str} </Text>
    </div>
  </Section>;