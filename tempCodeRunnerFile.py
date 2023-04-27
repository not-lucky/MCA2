tream, please submit a PR if you know how to fix this
# stream completion
for result in StreamingCompletion.create(
        model='gpt-4',
        prompt=prompt,
        results=Search.create(
            prompt, actualSearch=True
        ),  # create search (set actualSearch to False to disable internet)
        creative=False,
        detailed=False,
        codeContext=''):  # up to 3000 chars of code

    print(result.completion.choices[0].text, e